# Nes Sprites

• 8x8 Mode: 
This selects a tile in the pattern table from 0-255, or if bit 3 of PPU_CTRL is set, a tile from 256-511.  

• 8x16 Mode: 
Two consecutive tiles are selected, the first for the top half and the second for the bottom half. 

# OAM Buffer
The sprite data is held in 256 bytes of RAM inside the PPU called OAM (Object Attribute Memory). <br>
The PPU can fill OAM  by reading directly from the CPU’s RAM, usually once per video frame.
