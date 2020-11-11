# NES - CPU ([Ricoh 2A03](https://en.wikipedia.org/wiki/Ricoh_2A03)) Registers

CPU Registers: <br>
The 6502 has fewer registers than similar processors. There are three special purpose
registers, the program counter, stack pointer and status register which each have a specific
use. It also has three general purpose registers, the accumulator and the index registers, X
and Y, which can be used to store data or control information temporarily.

Accumulator (A)
The accumulator is an 8-bit register which stores the results of arithmetic and logic
operations. The accumulator can also be set to a value retrieved from memory.

Index Register X (X)
The X register is an 8-bit register typically used as a counter or an offset for certain
addressing modes. The X register can be set to a value retrieved from memory and can be
used to get or set the value of the stack pointer.

Index Register Y (Y)
The Y register is an 8-bit register which is used in the same way as the X register, as a
counter or to store an offset. Unlike the X register, the Y register cannot affect the stack
pointer. 