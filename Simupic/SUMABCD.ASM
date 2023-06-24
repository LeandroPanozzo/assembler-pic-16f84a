        LIST p=16c84
op1     equ     0x0c
op2     equ     0x0d
result  equ     0X0E
estado  equ     0x03

        ORG 0X00
        movf    op1,0
        addwf   op2,0
        movwf   result
        addlw   0x06
        movwf   0x2f
        btfsc   0x2f,4
        movwf   result
        end
