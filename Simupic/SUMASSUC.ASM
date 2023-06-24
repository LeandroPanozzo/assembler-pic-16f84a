;----------------------------suma de direcciones-----------------------------
;realizar un programa que permita sumar el contenido de las siguientes dir
;2Ah, 2Bh, 2Ch y 2Dh guardando el resultado en 0Dh
;----------------------------------------------------------------------------
;-------------------Especificacion del microcontrolador----------------------
        List    p=16f84;
;----------------------------------------------------------------------------
;-------------------------------Asignaciones---------------------------------
Dir1    EQU     0x2A;
Dir2    EQU     0x2B;
Dir3    EQU     0x2C;
Dir4    EQU     0x2D;
Resu    EQU     0x0D;
;----------------------------------------------------------------------------
        ORG     0x00;
        movlw   0x00;limpio el registro w poniendo 0
        movwf   Resu; guardo el 0 en la direccion de memoria resu
        movlw   0x00;Cargo 0 en w
        addwf   Dir1;sumo el valor de Dir1 en el registro w
        addwf   Dir2;
        addwf   Dir3;
        addwf   Dir4;
        movwf   Resu;guardo el resultado que estaba en w en resu
        end
