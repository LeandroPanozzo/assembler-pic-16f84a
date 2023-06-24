;------------CONSIGNA-----------------------------
;Realizar la divisi¢n entera entre (0x2A)/(0x2B)
;Almacenar el Cociente en 0x2C
;y el Resto en 0x2D
;NOTA: Se va a contemplar que el divisor sea distinto de cero
;-------------------------------------------------
        LIST    p=16c84;

opa     EQU     0x2A; dividendo
opb     EQU     0x2B; divisor
c       EQU     0x2C; Cociente
r       EQU     0x2D; Resto
est     EQU     0x03; Registro de estado



        ORG     0x00;

                    ;**********************************************
        movlw   0x0A;* En ‚stas lineas solo cargo datos en las    *
        movwf   opa; * posiciones de memoria para dar un ejemplo  *
        movlw   0x04;* r pido del funcionamiento del programa.    *
        movwf   opb; **********************************************

        clrf    c;   Pongo a cero la variable que va a llevar el cociente
        movf    opa,0; muevo opa para verificar si es cero
        btfsc   est,2; verifica si el dividendo es cero probando bit de est 2
        goto    fin_0; si es cero va a saltar al final dejando c=0 
        movf    opb,0; W<-(opb)
seguir  subwf   opa,1; Resta (opa)-(W)
        btfss   est,0; prueba si no es negativo el resultado
        goto    fin; si daba negativo (Carry=0) entraba en el salto al fin
        incf    c,1; Si Carry=1 no dio resultado negativo, entonces incrementa 
        goto    seguir; Una vez incrementado, sigue operando.
fin     addwf   opa,0; Si daba negativo debe restaurar el resto
fin_0   movwf   r; guarda el resto en la variable que se ped¡a.
        end


                   

