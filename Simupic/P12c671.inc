        LIST
; P12C671.INC  Standard Header File, Version 1.01    Microchip Technology, Inc.
        NOLIST

; This header file defines configurations, registers, and other useful bits of
; information for the PIC12C671 microcontroller.  These names are taken to match 
; the data sheets as closely as possible.  

; Note that the processor must be selected before this file is 
; included.  The processor may be selected the following ways:

;       1. Command line switch:
;               C:\ MPASM MYFILE.ASM /PIC16C671
;       2. LIST directive in the source file
;               LIST   P=PIC12C671
;       3. Processor Type entry in the MPASM full-screen interface

;==========================================================================
;
;       Revision History
;
;==========================================================================

;Rev:   Date:    Reason:

;1.00   11/12/96 Original
;1.01	12/18/96 Modified per review

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

        IFNDEF __12C671
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF

;==========================================================================
;
;       Register Definitions
;
;==========================================================================

W                            EQU     H'0000'
F                            EQU     H'0001'

;----- Register Files------------------------------------------------------

INDF                         EQU     H'0000'
TMR0                         EQU     H'0001'
PCL                          EQU     H'0002'
STATUS                       EQU     H'0003'
FSR                          EQU     H'0004'
GPIO                         EQU     H'0005'
PCLATH                       EQU     H'000A'
INTCON                       EQU     H'000B'
PIR1			     EQU     H'000C'
ADRES			     EQU     H'001E'
ADCON0			     EQU     H'001F'

OPTION_REG                   EQU     H'0081'
TRISIO                       EQU     H'0085'
PIE1			     EQU     H'008C'
PCON                         EQU     H'008E'
OSCCAL			     EQU     H'008F'
ADCON1                       EQU     H'009F'

;----- STATUS Bits --------------------------------------------------------

IRP                          EQU     H'0007'
RP1                          EQU     H'0006'
RP0                          EQU     H'0005'
NOT_TO                       EQU     H'0004'
NOT_PD                       EQU     H'0003'
Z                            EQU     H'0002'
DC                           EQU     H'0001'
C                            EQU     H'0000'

;----- ADCON0 Bits --------------------------------------------------------

ADCS1                        EQU     H'0007'
ADCS0                        EQU     H'0006'
CHS1                         EQU     H'0004'
CHS0                         EQU     H'0003'
GO                           EQU     H'0002'
NOT_DONE                     EQU     H'0002'
GO_DONE                      EQU     H'0002'
ADON                         EQU     H'0000'

;----- INTCON Bits --------------------------------------------------------

GIE                          EQU     H'0007'
PEIE                         EQU     H'0006'
T0IE                         EQU     H'0005'
GPIE                         EQU     H'0003'
T0IF                         EQU     H'0002'
GPIF                         EQU     H'0000'

;----- PIR1 Bits ----------------------------------------------------------

ADIF                         EQU     H'0006'

;----- OPTION Bits --------------------------------------------------------

NOT_GPPU		     EQU     H'0007'
T0CS                         EQU     H'0005'
T0SE                         EQU     H'0004'
PSA                          EQU     H'0003'
PS2                          EQU     H'0002'
PS1                          EQU     H'0001'
PS0                          EQU     H'0000'

;----- PIE1 Bits ----------------------------------------------------------

ADIE                         EQU     H'0006'

;----- PCON Bits ----------------------------------------------------------

NOT_POR                      EQU     H'0001'

;----- ADCON1 Bits --------------------------------------------------------

PCFG2			     EQU     H'0002'
PCFG1                        EQU     H'0001'
PCFG0                        EQU     H'0000'

;==========================================================================
;
;       RAM Definition
;
;==========================================================================

        __MAXRAM H'BF'
        __BADRAM H'06'-H'09', H'0D'-H'1D',H'86'-H'89',H'8D',H'90'-H'9E'

;==========================================================================
;
;       Configuration Bits
;
;==========================================================================

_MCLRE_ON                    EQU     H'3FFF'
_MCLRE_OFF                   EQU     H'3FBF'
_CP_ALL                      EQU     H'00CF'
_CP_75                       EQU     H'15DF'
_CP_50                       EQU     H'2AEF'
_CP_OFF                      EQU     H'3FFF'
_PWRTE_OFF                   EQU     H'3FFF'
_PWRTE_ON                    EQU     H'3FF7'
_WDT_ON                      EQU     H'3FFF'
_WDT_OFF                     EQU     H'3FFB'
_LP_OSC                      EQU     H'3FFC'
_XT_OSC                      EQU     H'3FFD'
_INTRC_OSC                   EQU     H'3FFE'
_EXTRC_OSC                   EQU     H'3FFF'

        LIST
