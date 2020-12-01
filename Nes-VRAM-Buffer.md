# VRAM Buffer

To write a single byte to VRAM, a three-byte packet is required:
Byte 0: [VRAM adress hi byte]
Byte 1: [VRAM adress lo byte]
Byte 2: [data byte]
