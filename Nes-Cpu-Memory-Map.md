# NES - CPU ([Ricoh 2A03](https://en.wikipedia.org/wiki/Ricoh_2A03)) Memory Map

NES [CPU](https://github.com/HudsonSchumaker/Nes-8bit/blob/main/Nes-Cpu-Registers.txt) bus:  
• PRG RAM: Memory that the CPU can read from and write to (modify). <br>
• PRG ROM: The program code included on the game cartridge. The CPU can read this data, but can’t write to it. <br>
• PPU (Picture Processing Unit): Generates the video signal. <br>
• APU (Audio Processing Unit): Generates audio. <br>
• Additional components in the game cartridge, which may include extra RAM, ROM, or registers. <br><br>


Address Range | Size           | Notes                                                                                |
--------------|----------------|--------------------------------------------------------------------------------------|
$0000–$00FF	  | 256 bytes      | Zero Page — Special Zero Page addressing modes give faster memory read/write access  |
$0100–$01FF	  | 256 bytes	     | Stack memory |
$0200–$07FF	  | 1536 bytes	   | RAM |
$0800–$0FFF	  | 2048 bytes	   | Mirror of $0000–$07FF	$0800–$08FF Zero Page |
$0900–$09FF   | .              | Stack |
$0A00–$0FFF   | .              | RAM   |
$1000–$17FF	  | 2048 bytes     | Mirror of $0000–$07FF	$1000–$10FF Zero Page |
$1100–$11FF   | .              | Stack |
$1200–$17FF   | .              | RAM   |
$1800–$1FFF	  | 2048 bytes     | Mirror of $0000–$07FF	$1800–$18FF Zero Page |
$1900–$19FF   | .              | Stack |
$1A00–$1FFF   | .              | RAM   |
$2000–$2007	  | 8 bytes	       | Input/Output registers |
$2008–$3FFF	  | 8184 bytes     | Mirror of $2000–$2007 (multiple times) |
$4000–$401F	  | 32 bytes	     | Input/Output registers                 |
$4020–$5FFF	  | 8160 bytes     | Expansion ROM — Used with Nintendo's MMC5 to expand the capabilities of VRAM. |
$6000–$7FFF  	| 8192 bytes     | SRAM — Save Ram used to save data between game plays. |
$8000–$FFFF	  | 32768 bytes    | PRG-ROM|
$FFFA–$FFFB	  | 2 bytes        | Address of Non Maskable Interrupt (NMI) handler routine |
$FFFC–$FFFD	  | 2 bytes        | Address of Power on reset handler routine |
$FFFE–$FFFF	  | 2 bytes	       | Address of Break (BRK instruction) handler routine |

------------------------------------------------------------------------------------------------------------------------------------------------
