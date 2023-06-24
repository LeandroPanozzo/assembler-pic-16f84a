;------------CONSIGNA-----------------------------
;Realizar la divisi¢n entera entre (0x2A)/(0x2B)
;Almacenar el Cociente en 0x2C
;y el Resto en 0x2D
;-------------------------------------------------
        LIST    p=16c84;

opa     EQU     0x2A; numerador
opb     EQU     0x2B; denominador
c       EQU     0x2C; Cociente
r       EQU     0x2D; Resto
est     EQU     0x03; Registro de estado



        ORG     0x00;

       
        movlw   0x09;
        movwf   opa;
        movlw   0x04;
        movwf   opb;

        clrf    c;
        movf    opb,0;
seguir  subwf   opa,1;
        btfss   est,0;
        goto    fin;
        incf    c,1;
        goto    seguir;
fin     addwf   opa,0;
        movwf   r;
        end


                   

