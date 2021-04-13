// Hudson Schumaker
#include "neslib.h"

// link the pattern table into CHR ROM
//#link "chr_generic.s"

// main function, run after console reset
void main(void) {

  // set palette colors
  pal_col(0, 0x0F);	// set screen to black
  pal_col(1, 0x0F);	// black
  pal_col(2, 0x30);	// white
  pal_col(3, 0x30);	// white

  // write text to name table
  vram_adr(NTADR_A(2, 2));	// set address
  vram_write("SCHUMAKER TEAM", 14);
  
  // check system signal type NTSC(Japan, America), PAL Europe 
  if (ppu_system()) {
     vram_adr(NTADR_A(2, 3));	
     vram_write("NTSC", 4);
  } else {
     vram_adr(NTADR_A(2, 3));	
     vram_write("PAL", 3);
  }
  
  // write bytes to video RAM
  // enable PPU rendering (turn on screen)
  ppu_on_all();

  // infinite loop
  for (;;);
}
