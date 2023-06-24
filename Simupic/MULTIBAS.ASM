        List    p=16c84
op1     EQU     0x2A
op2     EQU     0x2c
resul   EQU     0X2F
estado  equ     0x03

        ORG     0x00
        clrf    resul 
        movlw   0x05
        movwf   op1     ; mueve w a l op1
        movlw   0x03
        movwf   op2
        movf    op2,1
        btfsc   estado, 2
        goto    fin
        clrw
bucle   addwf   op1,0
        decfsz  op2,1
        goto    bucle
        movwf   resul
fin     nop
        end

