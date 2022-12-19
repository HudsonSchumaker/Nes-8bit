;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; The iNES header (contains a total of 16 bytes with the flags at $7F00)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.segment "HEADER"
.byte $4E,$45,$53,$1A        ; 4 bytes with the characters 'N','E','S','\n'
.byte $02                    ; How many 16KB of PRG-ROM we'll use (=32KB)
.byte $01                    ; How many 8KB of CHR-ROM we'll use (=8KB)
.byte %00000000              ; Horz mirroring, no battery, mapper 0
.byte %00000000              ; mapper 0, playchoice, NES 2.0
.byte $00                    ; No PRG-RAM
.byte $00                    ; NTSC TV format
.byte $00                    ; Extra flags for TV format and PRG-RAM
.byte $00,$00,$00,$00,$00    ; Unused padding to complete 16 bytes of header
