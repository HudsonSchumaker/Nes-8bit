.include "consts.inc"
.include "header.inc"
.include "reset.inc"

; PRG-ROM code located at $8000
.segment "CODE"

; Subroutine to load all 32 color palette values from ROM
.proc LoadPalette
    ldy #0                   ; Y = 0
LoopPalette:
    lda PaletteData,y        ; Lookup byte in ROM
    sta PPU_DATA             ; Set value to send to PPU_DATA
    iny                      ; Y++
    cpy #32                  ; Is Y equal to 32?
    bne LoopPalette          ; Not yet, keep looping
    rts                      ; Return from subroutine
.endproc

; Reset handler (called when the NES resets or powers on)
Reset:
    INIT_NES                 ; Macro to initialize the NES to a known state

Main:
    bit PPU_STATUS           ; Read PPU_STATUS to reset the PPU_ADDR latch
    ldx #$3F
    stx PPU_ADDR             ; Set hi-byte of PPU_ADDR to $3F
    ldx #$00
    stx PPU_ADDR             ; Set lo-byte of PPU_ADDR to $00

    jsr LoadPalette          ; Jump to subroutine LoadPalette

    lda #%00011110
    sta PPU_MASK             ; Set PPU_MASK bits to render the background

LoopForever:
    jmp LoopForever          ; Force an infinite execution loop

; NMI interrupt handler
NMI:
    rti                      ; Return from interrupt

; IRQ interrupt handler
IRQ:
    rti                      ; Return from interrupt

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Hardcoded list of color values in ROM to be loaded by the PPU
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
PaletteData:
.byte $0F,$2A,$0C,$3A, $0F,$2A,$0C,$3A, $0F,$2A,$0C,$3A, $0F,$2A,$0C,$3A ; Background
.byte $0F,$10,$00,$26, $0F,$10,$00,$26, $0F,$10,$00,$26, $0F,$10,$00,$26 ; Sprites

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Vectors with the addresses of the handlers that we always add at $FFFA
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.segment "VECTORS"
.word NMI                    ; Address (2 bytes) of the NMI handler
.word Reset                  ; Address (2 bytes) of the Reset handler
.word IRQ                    ; Address (2 bytes) of the IRQ handler
