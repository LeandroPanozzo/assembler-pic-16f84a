        LIST    p=16c84; Especifica modelo de microcontrolador

;---------------------------------------------------------------
op1     equ     0x0c;
op2     equ     0x0d;
est     equ     0x03; registro de estados
resu    equ     0x0e; posici¢n de memoria para guardar resultado
;----------------------------------------------------------------
;vamos a hacer op2 - op1 y solo si da un n£mero positivo el programa
;almacenar  el resultado en la posici¢n 0x0e
;---------------------------------------------------------------
        ORG     0x00;
        
        movf    op1,0;
        subwf   op2,0;
        btfsc   est,0;
        movwf   resu;
        end;


