// Hudson Schumaker

#include "neslib.h"
#include <string.h>
#include <stdlib.h>

// link the pattern table into CHR ROM
//#link "chr_generic.s"

// attribute table in PRG ROM
const char ATTRIBUTE_TABLE[64] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 0-3
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 4-7
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 8-11
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 12-15
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 16-19
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 20-23
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // rows 24-27
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01  // rows 28-29
};

/*{pal:"nes",layout:"nes"}*/
const char PALETTE[16] = { 
  0x03,			// screen color

  0x0d,0x0d,0x0d,0x30,	// background palette 0
  0x30,0x30,0x30,0x0d,	// background palette 1
  0x0d,0x0d,0x0d,0xd,	// background palette 2
  0x0d,0x0d,0x0d        // background palette 3
};

// main function, run after console reset
void main(void) {
  // set background palette colors
  pal_bg(PALETTE);
  
  // fill nametable with diamonds
  vram_adr(NAMETABLE_A);	// start address ($2000)
  vram_fill(0x16, 48*48);	// fill nametable (960 bytes)
  
  // copy attribute table from PRG ROM to VRAM
  vram_write(ATTRIBUTE_TABLE, sizeof(ATTRIBUTE_TABLE));

  // enable PPU rendering (turn on screen)
  ppu_on_all();

  // infinite loop
  for(;;);
}
