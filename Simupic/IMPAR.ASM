;--------CONSIGNA-------------------------------------
;Recorrer el intervalo comprendido entre [10;18]
;y a los contenidos de las posiciones de memoria impares,
; desplazarlos un bit a la derecha
;-----------------------------------------------------
        List    p=16c84
con     EQU     0x2A
fsr     EQU     0x04

        ORG     0x00
        movlw   0x09
        movwf   con
        movlw   0x10
        movwf   fsr

seguir  btfsc   fsr,0
        rrf     0x00,1
        incf    fsr,1
        decfsz  con,1
        goto    seguir
        end

