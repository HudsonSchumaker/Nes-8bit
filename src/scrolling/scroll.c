// Hudson Schumaker

#include "neslib.h"
#include <string.h>

// link the pattern table into CHR ROM
//#link "chr_generic.s"

// function to write a string into the name table
//   adr = start address in name table
//   str = pointer to string
void put_str(unsigned int adr, const char *str) {
  vram_adr(adr);        // set PPU read/write address
  vram_write(str, strlen(str)); // write bytes to PPU
}

// function to scroll window up and down until end
void scroll_demo() {
  int x = 0;   // x scroll position
  int y = 255; // y scroll position
  int dy = 1;  // y scroll direction
  
  // infinite loop
  for (;;) {
    // wait for next frame
    ppu_wait_nmi();
    // update y variable
    y += dy;
    // change direction when hitting either edge of scroll area
    if (y >= 470) dy = -1;
    if (y == 280) dy = 1;
    // set scroll register
    scroll(x, y);
  }
}

// main function, run after console reset
void main(void) {
  // set palette colors
  pal_col(0,0x0D);	// set screen to black
  pal_col(1,0x02);	// blue
  pal_col(2,0x02);	// blue
  pal_col(3,0x021);	// cyan?

  // write text to name table
  put_str(NTADR_A(2,0), "SchumakerTeam");

  // enable PPU rendering (turn on screen)
  ppu_on_all();

  // scroll window back and forth
  scroll_demo();
}
