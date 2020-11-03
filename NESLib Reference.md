# Nes lib reference
#include "neslib.h"

| Function                         | Description                                                         |
-----------------------------------|----------------------------------------------------------------------
pal_col(index,color)               | Set the color of a palette entry.  <br>
pal_bg(*data)                      | Set the background palette from a  16-byte array. <br>
pal_spr(*data)                     | Set the sprite palette from a 16-byte  array. <br>
pal_all(*data)                     | Set the background and sprite  palettes from a 32-byte array. <br>
pal_clear()                        | Reset all palette colors to black. <br>
pal_bright(level)                  | Set virtual bright level (0=black,  4=normal, 8=white) <br>
pal_bg_bright(level)               | Set virtual bright level for background only. <br>
pal_spr_bright(level)              | Set virtual bright level for sprites  only. <br>
ppu_wait_nmi()                     | Wait for next NMI (60 Hz) <br>
ppu_wait_frame()                   | Wait for next NMI, but skips frames  in NTSC to achieve 50 Hz.<br>
ppu_off()                          | Turn off PPU rendering.  <br>
ppu_on_all()                       | Turn on background and sprites.<br>
ppu_on_bg()                        | Turn on background only. <br>
ppu_on_spr()                       | Turn on sprites only. <br>
ppu_mask(mask)                     | Set PPU_MASK directly.  <br>
ppu_system()                       | Returns zero for PAL, non-zero for  NTSC. <br>
nesclock()                         | Returns 8-bit counter incremented  at every NMI. <br>
get_ppu_ctrl_var()                 | Get the internal PPU_CTRL variable.  <br>
set_ppu_ctrl_var(v)                | Set the internal PPU_CTRL variable. <br>
oam_clear()                        | Clear OAM sprite buffer.   <br>
oam_size(size)                     | Set 0 for 8x8 sprites, 1 for 8x16  sprites.  <br>
oam_spr(x,y,c,a,id)                | Add sprite entry to OAM.  <br>
oam_meta_spr(x,y,id,*data)         | Add metasprite to OAM. <br>
oam_hide_rest(id)                  | Hide OAM entries starting from  given index.  <br>
famitone_init(*data)               | Initialize FamiTone music library.  <br>
sfx_init(*data)                    | Initialize FamiTone sound effects.   <br>
music_play(index)                  | Play a FamiTone song.  <br> 
music_stop()                       | Stop music. <br>  
music_pause()                      | Pause and unpause music.   <br>
sfx_play(index,channel)            | Play sound effect on channel 0-3.  <br> 
sample_play(sample)                | Play a DMC sample.   <br>
famitone_update()                  | Called once per NMI.  <br>
pad_poll(pad)                      | Poll controller input. <br> 
pad_trigger(pad)                   | Poll in trigger mode.  <br> 
pad_state(pad)                     | Get previously polled pad state. <br> 
scroll(x,y)                        | Set X and Y scroll shadow registers.<br> 
split(x,y)                         | Split screen at Y position (requires sprite 0 setup first). Only sets the X scroll value. <br>   
splitxy(x,y)                       | Split screen, setting both X and Y  scroll values. <br> 
bank_bg(n)                         | Set background CHR bank (0 or 1). <br>  
bank_spr(n)                        | Set sprite CHR bank (0 or 1). <br> 

