;---------------------Consigna-------------------------------
;Dado el intervalo de memoria comprendido entre [0x20;0x29].
;Al contenido de cada posici¢n (considerando extremos)
;decrementarlo en una unidad.
;-------------------------------------------------------------
        List    p=16c84

;---------ZONA DE ETIQUETAS-----------------------------------


fsr     EQU     0x04;Registro FSR
con     EQU     0x2A;en esta direcci¢n se usar  como
indf    EQU            0x00    ;control para terminar el
                    ;recorrido del intervalo.

;---------PROGRAMA--------------------------------------------

        ORG     0x00

        movlw   0x0A
        movwf   con
        movlw   0x20
        movwf   fsr
seguir  decf    indf,1    ; Direccionamiento indirecto a la dir que est  en FSR
        incf    fsr,1     ; Hago que el FSR "apunte" a la siguiente posici¢n
        decfsz  con,1     ; decremento mi variable de control de recorrido (salto si es cero)
        goto    seguir    ;Si quedan dirs que tratar, salto a seguir tratando.
        end
