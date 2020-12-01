# VRAM Buffer

To write a single byte to VRAM, a three-byte packet is required:<br>
Byte 0: [VRAM adress hi byte]<br>
Byte 1: [VRAM adress lo byte]<br>
Byte 2: [data byte]<br>
<br>
The VRAM address uses only 14 significant bits, so the two hi bytes unsed is for flags that's <br>
indicate horizontal or vertical sequencies.

