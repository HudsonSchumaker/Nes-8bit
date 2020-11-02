pal_col(index,color) Set the color of a palette entry.  p
al_bg(*data) Set the background palette from a  16-byte array. 
pal_spr(*data) Set the sprite palette from a 16-byte  array. 
pal_all(*data) Set the background and sprite  palettes from a 32-byte array. 
pal_clear() Reset all palette colors to black. 
pal_bright(level) Set virtual bright level (0=black,  4=normal, 8=white) 
pal_bg_bright(level) Set virtual bright level for background only. 
pal_spr_bright(level) Set virtual bright level for sprites  only. 
ppu_wait_nmi() Wait for next NMI (60 Hz) 
ppu_wait_frame() Wait for next NMI, but skips frames  in NTSC to achieve 50 Hz.
ppu_off() Turn off PPU rendering.  
ppu_on_all() Turn on background and sprites.
ppu_on_bg() Turn on background only. 
ppu_on_spr() Turn on sprites only. 
ppu_mask(mask) Set PPU_MASK directly.  
ppu_system() Returns zero for PAL, non-zero for  NTSC.  
nesclock() Returns 8-bit counter incremented  at every NMI. 
get_ppu_ctrl_var() Get the internal PPU_CTRL variable.  
set_ppu_ctrl_var(v) Set the internal PPU_CTRL variable. 
