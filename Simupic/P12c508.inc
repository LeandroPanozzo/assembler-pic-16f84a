	LIST
; P12C508.INC  Standard Header File, Version 1.01    Microchip Technology, Inc.
	NOLIST

; This header file defines configurations, registers, and other useful bits of
; information for the PIC12C508 microcontroller.  These names are taken to match 
; the data sheets as closely as possible.  

; Note that the processor must be selected before this file is 
; included.  The processor may be selected the following ways:

;       1. Command line switch:
;               C:\ MPASM MYFILE.ASM /P12C508
;       2. LIST directive in the source file
;               LIST   P=12C508
;       3. Processor Type entry in the MPASM full-screen interface

;==========================================================================
;
;	   Revision History
;
;==========================================================================

;Rev:   Date:    Reason:

;1.01   08/21/96 Removed VCLMP fuse, corrected oscillators
;1.00   04/10/96 Initial Release

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

        IFNDEF __12C508
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF

;==========================================================================
;
;       Register Definitions
;
;==========================================================================

W                            EQU     H'0000'
F                            EQU     H'0001'

;----- Register Files -----------------------------------------------------

INDF                         EQU     H'0000'
TMR0                         EQU     H'0001'
PCL                          EQU     H'0002'
STATUS                       EQU     H'0003'
FSR                          EQU     H'0004'
OSCCAL                       EQU     H'0005'
GPIO                         EQU     H'0006'

;----- STATUS Bits --------------------------------------------------------

PA2                          EQU     H'0007'
PA1                          EQU     H'0006'
PA0                          EQU     H'0005'
NOT_TO                       EQU     H'0004'
NOT_PD                       EQU     H'0003'
Z                            EQU     H'0002'
DC                           EQU     H'0001'
C                            EQU     H'0000'

;----- OPTION Bits --------------------------------------------------------

T0CS                         EQU     H'0005'
T0SE                         EQU     H'0004'
PSA                          EQU     H'0003'
PS2                          EQU     H'0002'
PS1                          EQU     H'0001'
PS0                          EQU     H'0000'

;==========================================================================
;
;       RAM Definition
;
;==========================================================================

        __MAXRAM H'1F'

;==========================================================================
;
;       Configuration Bits
;
;==========================================================================

_MCLRE_ON                    EQU     H'0FFF'
_MCLRE_OFF                   EQU     H'0FEF'
_CP_ON                       EQU     H'0FF7'
_CP_OFF                      EQU     H'0FFF'
_WDT_ON                      EQU     H'0FFF'
_WDT_OFF                     EQU     H'0FFB'
_LP_OSC                      EQU     H'0FFC'
_XT_OSC                      EQU     H'0FFD'
_IntRC_OSC                   EQU     H'0FFE'
_ExtRC_OSC                   EQU     H'0FFF'

	LIST
