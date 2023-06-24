        LIST
; MEMORY.INC  Standard Header File, Version 1.01    Microchip Technology, Inc.
        NOLIST

; This header file defines the maximum byte address for memory devices.

; To use MPASM to generate memory device data, select either EEPROM8 or
; EEPROM16 as the "processor".  Use the DATA directive to generate the 
; data for the device.  All mathematical, text substitution, symbol, and 
; macro support is available for generating the data.

; Note that the processor must be selected before this file is 
; included.  The processor may be selected the following ways:

;       1. Command line switch:
;               C:\ MPASM MYFILE.ASM /PEEPROM8
;          or
;               C:\ MPASM MYFILE.ASM /PEEPROM16
;       2. LIST directive in the source file
;               LIST   P=EEPROM8
;          or
;               LIST   P=EEPROM16
;       3. Processor Type entry in the MPASM full-screen interface

; The default byte size for a memory device is 256 bytes.  To modify this,
; use the symbols defined in the file in the LIST M=??? directive.  For
; example:

;       LIST    P=EEPROM8
;       INCLUDE "MEMORY.INC"
;       LIST    M=_24LCS21

; Note that case sensitivity is enforced by default.

;==========================================================================
;
;	   Revision History
;
; 1.01  12/16/96  Added new devices
; 1.00  07/18/96  Initial release
;==========================================================================

;Rev:   Date:    Reason:

;1.00   06/07/96 Initial Release

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

        IFDEF __EEPROM8
#define __IS_MEMORY
        ENDIF
       
        IFDEF __EEPROM16
#define __IS_MEMORY
        ENDIF
       
        IFNDEF __IS_MEMORY
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ELSE
#undefine __IS_MEMORY
        ENDIF

;==========================================================================
;
;       2-Wire Bus Protocol
;
;==========================================================================
;--------------------------------------------------------------------------
;
;       Standard C-Series
;
;--------------------------------------------------------------------------

#define _24C01A         H'007F'
#define _24C02A         H'00FF'
#define _24C04A         H'01FF'
#define _24C08B         H'03FF'
#define _24C16B         H'07FF'

#define _85C72          H'007F'
#define _85C82          H'00FF'
#define _85C92          H'01FF'

;--------------------------------------------------------------------------
;
;       Low-Voltage LC Series and AA Series
;
;--------------------------------------------------------------------------

#define _24LC01B        H'007F'
#define _24AA01	        H'007F'
#define _24LC02B        H'00FF'
#define _24AA02	        H'00FF'
#define _24LC04B        H'01FF'
#define _24AA04	        H'01FF'
#define _24LC08B        H'03FF'
#define _24AA08	        H'03FF'
#define _24LC16B        H'07FF'
#define _24AA16	        H'07FF'
#define _24FC16	        H'07FF'
#define _24LC164        H'07FF'
#define _24AA164        H'07FF'
#define _24LC174        H'07FF'
#define _24AA174        H'07FF'

;--------------------------------------------------------------------------
;
;       High Density
;
;--------------------------------------------------------------------------

#define _24C32          H'0FFF'
#define _24C32A         H'0FFF'
#define _24LC32	        H'0FFF'
#define _24LC32A        H'0FFF'
#define _24AA32         H'0FFF'
#define _24AA32A        H'0FFF'
#define _24FC32	        H'0FFF'

;--------------------------------------------------------------------------
;
;       Smart Serial (tm) Family
;
;--------------------------------------------------------------------------

#define _24C65          H'1FFF'
#define _24LC65	        H'1FFF'
#define _24AA65	        H'1FFF'
#define _24FC65	        H'1FFF'

;--------------------------------------------------------------------------
;
;       VESA (tm) / DDC (tm)
;
;--------------------------------------------------------------------------

#define _24LC21         H'007F'
#define _24LC21A        H'007F'
#define _24LCS21        H'007F'
#define _24LCS21A       H'007F'

;--------------------------------------------------------------------------
;
;       SPD DIMM
;
;--------------------------------------------------------------------------

#define _24LCS52        H'00FF'

;==========================================================================
;
;       3-Wire/4-Wire Bus Protocol
;
;==========================================================================
;--------------------------------------------------------------------------
;
;       G.I.
;
;--------------------------------------------------------------------------

#define _59C11          H'007F'

;--------------------------------------------------------------------------
;
;       Standard C-Series
;
;--------------------------------------------------------------------------

#define _93C06          H'001F'
#define _93C46          H'007F'
#define _93C76          H'03FF'
#define _93C86          H'07FF'

;--------------------------------------------------------------------------
;
;       Low-Voltage LC Series
;
;--------------------------------------------------------------------------

#define _93LC46         H'007F'
#define _93LC56         H'00FF'
#define _93LC66         H'01FF'

;==========================================================================
;
;       3-Wire Bus Protocol
;
;==========================================================================
;--------------------------------------------------------------------------
;
;       Low-Voltage AA Series
;
;--------------------------------------------------------------------------

#define _93AA46         H'007F'
#define _93AA56         H'00FF'
#define _93AA66         H'01FF'
#define _93AA76         H'03FF'
#define _93AA86         H'07FF'

;--------------------------------------------------------------------------
;
;       Low-Voltage LC Series
;
;--------------------------------------------------------------------------

#define _93LC46B        H'007F'
#define _93LC56B        H'00FF'
#define _93LC66B        H'01FF'
#define _93LC76B        H'03FF'
#define _93LC86B        H'07FF'

;--------------------------------------------------------------------------
;
;       Secure LCS-Series
;
;--------------------------------------------------------------------------

#define _93LCS56        H'00FF'
#define _93LCS66        H'01FF'

;==========================================================================
;
;       SPI Protocol
;
;==========================================================================
;--------------------------------------------------------------------------
;
;       Standard C-Series
;
;--------------------------------------------------------------------------

#define _25C080         H'03FF'
#define _25C160         H'07FF'

;--------------------------------------------------------------------------
;
;       Low-Voltage LC Series and AA Series
;
;--------------------------------------------------------------------------

#define _25LC080        H'03FF'
#define _25AA080        H'03FF'
#define _25LC160        H'07FF'
#define _25AA160        H'07FF'

        LIST
