;---------CONSIGNA----------------------------
;Multiplicar un n£mero de la dir 0x10 por 6
;y guardarlo en la £ltima direcci¢n de memoria
;---------------------------------------------

        List    p=16c84; especifica el modelo de microcontrolador

;--------ZONA DE ETIQUETAS-------------------------------------

dirN    EQU     0x10;direcci¢n donde est  guardado el n£mero
resu    EQU     0x2f;direcci¢n donde se guardar  el resultado
conMult EQU     0x12;dir donde se guardar  la cantidad de veces
                    ;que tengo que sumar
;--------------------------------------------------------------

        ORG     0x00
        movlw   0x03;
        movwf   dirN;

        movlw   0x05; cargo el reg W con el n£mero 5 (un literal)
        movwf   conMult; muevo literal que est  en reg W hacia 0x12
        movf    dirN,0; el n£mero q est  en la dir 0x10 lo cargo al reg W
seguir  addwf   dirN,0; sumo el (W) con el (0x10)
        decfsz  conMult,1; decremento mi indicador para la multiplicaci¢n
        goto    seguir; Salto a la instrucci¢n para 'seguir' sumando
        movwf   resu; muevo el resultado que est  en el reg W a 0x2F
        end

       
