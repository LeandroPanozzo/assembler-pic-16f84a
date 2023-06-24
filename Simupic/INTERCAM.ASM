;------------CONSIGNA---------------------------------------------
;-----------------------------------------------------------------
; Intercambiar entre las direcciones                             |
;0x10 y 0x21 sus contenidos respectivos                          |
;                                                                |
;-----------------------------------------------------------------
        LIST    p=16c84; especifica el modelo de microcontrolador|
;-----------Zona de Etiquetas-------------------------------------
;                                                                |
dir1    EQU     0x10; etiqueta para la direcci¢n de memoria 0x10 |
dir2    EQU     0x21;    "      "    "    "      "    "     0x21 |
resg    EQU     0x0c; direcci¢n de resguardo para el intercambio |
;                                                                |
;-----------C¢digo del programa-----------------------------------


        ORG     0x00; Indica al ensamblador donde situar la siguiente
                    ; instrucci¢n en la memoria de programa

        movf    dir1,0; cargo en el reg W el contenido de la dir 0x10
        movwf   resg  ; muevo al espacio de resguardo el contenido del reg W
        movf    dir2,0; cargo en el reg W el contenido de la dir 0x21
        movwf   dir1  ; muevo lo que tengo en el acumulador a 0x10
        movf    resg,0; traigo lo que resguard‚ del contenido original
                      ; de 0x10 al acumulador para luego pasarlo a 0x21
        movwf   dir2  ; cargo en la direcci¢n 0x21 el contenido del reg W
        end



