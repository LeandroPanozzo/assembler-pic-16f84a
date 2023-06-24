;---------CONSIGNA----------------------------
;Multiplicar un n£mero de la dir 0x10 por otro que est  en 0x11
;y guardarlo en la £ltima direcci¢n de memoria
;---------------------------------------------

        List    p=16c84; especifica el modelo de microcontrolador

;--------ZONA DE ETIQUETAS-------------------------------------
mult    EQU     0x11;direcci¢n del multiplicador
dirN    EQU     0x10;direcci¢n donde est  guardado el n£mero a multiplicar
resu    EQU     0x2f;direcci¢n donde se guardar  el resultado
conMult EQU     0x12;dir donde se guardar  la cantidad de veces
                    ;que tengo que sumar
est     EQU     0x03; registro de estado
;--------------------------------------------------------------

        ORG     0x00
        movlw   0x03;
        movwf   dirN;
        movlw   0x01;
        movwf   mult;
        

	clrf	resu; pongo a cero la variable resultado por si la operación da cero al detectar el mult=0
        movf    mult,0; cargo el reg W con el multiplicador para verificar si es cero
	btfsc	est,2; verifico si es cero el valor del multiplicador, si es cero salto al final y dejo en cero el result
	goto	fin_0
        movf    dirN,0
        decfsz  mult,1; Decremento y detecto si queda en cero por si era igual a 1 para que no haga sumas
        goto    noes1;
        goto    fin;
noes1   movf    mult,0;
        movwf   conMult; muevo literal que est  en reg W hacia 0x12
        movf    dirN,0; el n£mero q est  en la dir 0x10 lo cargo al reg W
seguir  addwf   dirN,0; sumo el (W) con el (0x10)
        decfsz  conMult,1; decremento mi indicador para la multiplicaci¢n
        goto    seguir; Salto a la instrucci¢n para 'seguir' sumando
fin     movwf   resu; muevo el resultado que est  en el reg W a 0x2F
fin_0	nop
        end

       

