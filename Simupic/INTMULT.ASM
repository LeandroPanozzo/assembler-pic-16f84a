        list p=16c84
indf equ 0x00
fsr  equ 0x04
estado equ 0x03
contador equ 0x0c
iterador equ    0x0d

        org 0x00

        movlw 0x10  ; jhdfkerhgldhk
        movwf iterador
        movlw 0x20
        movwf fsr
        clrf  contador
blucle  movf  indf,0
        andlw 0x03
        btfsc estado,2
        incf contador,1
        incf fsr,1
        decfsz iterador,1
        goto blucle
        end
