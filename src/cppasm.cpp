/*! \file cppasm.cpp
    \brief Main file of the C++ Assembly Generator.
*/

#include "cppasm.h"

r8 AL { "AL" };
r8 AH { "AH" };
r8 BL { "BL" };
r8 BH { "BH" };
r8 CL { "CL" };
r8 CH { "CH" };
r8 DL { "DL" };
r8 DH { "DH" };
r8 SIL { "SIL" };
r8 DIL { "DIL" };
r8 SPL { "SPL" };
r8 R8L { "R8L" };
r8 R9L { "R9L" };
r8 R10L { "R10L" };
r8 R11L { "R11L" };
r8 R12L { "R12L" };
r8 R13L { "R13L" };
r8 R14L { "R14L" };
r8 R15L { "R15L" };

r16 AX { "AX" };
r16 BX { "BX" };
r16 CX { "CX" };
r16 DX { "DX" };
r16 BP { "BP" };
r16 SI { "SI" };
r16 DI { "DI" };
r16 SP { "SP" };
r16 R8W { "R8W" };
r16 R9W { "R9W" };
r16 R10W { "R10W" };
r16 R11W { "R11W" };
r16 R12W { "R12W" };
r16 R13W { "R13W" };
r16 R14W { "R14W" };
r16 R15W { "R15W" };

r32 EAX { "EAX" };
r32 EBX { "EBX" };
r32 ECX { "ECX" };
r32 EDX { "EDX" };
r32 EBP { "EBP" };
r32 ESI { "ESI" };
r32 EDI { "EDI" };
r32 ESP { "ESP" };
r32 R8D { "R8D" };
r32 R9D { "R9D" };
r32 R10D { "R10D" };
r32 R11D { "R11D" };
r32 R12D { "R12D" };
r32 R13D { "R13D" };
r32 R14D { "R14D" };
r32 R15D { "R15D" };

r64 RAX { "RAX" };
r64 RBX { "RBX" };
r64 RCX { "RCX" };
r64 RDX { "RDX" };
r64 RBP { "RBP" };
r64 RSI { "RSI" };
r64 RDI { "RDI" };
r64 RSP { "RSP" };
r64 R8 { "R8" };
r64 R9 { "R9" };
r64 R10 { "R10" };
r64 R11 { "R11" };
r64 R12 { "R12" };
r64 R13 { "R13" };
r64 R14 { "R14" };
r64 R15 { "R15" };

xmm XMM0 { "XMM0" };
xmm XMM1 { "XMM1" };
xmm XMM2 { "XMM2" };
xmm XMM3 { "XMM3" };
xmm XMM4 { "XMM4" };
xmm XMM5 { "XMM5" };
xmm XMM6 { "XMM6" };
xmm XMM7 { "XMM7" };
xmm XMM8 { "XMM8" };
xmm XMM9 { "XMM9" };
xmm XMM10 { "XMM10" };
xmm XMM11 { "XMM11" };
xmm XMM12 { "XMM12" };
xmm XMM13 { "XMM13" };
xmm XMM14 { "XMM14" };
xmm XMM15 { "XMM15" };

ymm YMM0 { "YMM0" };
ymm YMM1 { "YMM1" };
ymm YMM2 { "YMM2" };
ymm YMM3 { "YMM3" };
ymm YMM4 { "YMM4" };
ymm YMM5 { "YMM5" };
ymm YMM6 { "YMM6" };
ymm YMM7 { "YMM7" };
ymm YMM8 { "YMM8" };
ymm YMM9 { "YMM9" };
ymm YMM10 { "YMM10" };
ymm YMM11 { "YMM11" };
ymm YMM12 { "YMM12" };
ymm YMM13 { "YMM13" };
ymm YMM14 { "YMM14" };
ymm YMM15 { "YMM15" };

zmm ZMM0 { "ZMM0" };
zmm ZMM1 { "ZMM1" };
zmm ZMM2 { "ZMM2" };
zmm ZMM3 { "ZMM3" };
zmm ZMM4 { "ZMM4" };
zmm ZMM5 { "ZMM5" };
zmm ZMM6 { "ZMM6" };
zmm ZMM7 { "ZMM7" };
zmm ZMM8 { "ZMM8" };
zmm ZMM9 { "ZMM9" };
zmm ZMM10 { "ZMM10" };
zmm ZMM11 { "ZMM11" };
zmm ZMM12 { "ZMM12" };
zmm ZMM13 { "ZMM13" };
zmm ZMM14 { "ZMM14" };
zmm ZMM15 { "ZMM15" };
zmm ZMM16 { "ZMM16" };
zmm ZMM17 { "ZMM17" };
zmm ZMM18 { "ZMM18" };
zmm ZMM19 { "ZMM19" };
zmm ZMM20 { "ZMM20" };
zmm ZMM21 { "ZMM21" };
zmm ZMM22 { "ZMM22" };
zmm ZMM23 { "ZMM23" };
zmm ZMM24 { "ZMM24" };
zmm ZMM25 { "ZMM25" };
zmm ZMM26 { "ZMM26" };
zmm ZMM27 { "ZMM27" };
zmm ZMM28 { "ZMM28" };
zmm ZMM29 { "ZMM29" };
zmm ZMM30 { "ZMM30" };
zmm ZMM31 { "ZMM31" };

mm MM0 { "MM0" };
mm MM1 { "MM1" };
mm MM2 { "MM2" };
mm MM3 { "MM3" };
mm MM4 { "MM4" };
mm MM5 { "MM5" };
mm MM6 { "MM6" };
mm MM7 { "MM7" };

Sreg CS { "CS" };
Sreg DS { "DS" };
Sreg SS { "SS" };
Sreg ES { "ES" };
Sreg FS { "FS" };
Sreg GS { "GS" };

cr CR0 { "CR0" };
cr CR1 { "CR1" };
cr CR2 { "CR2" };
cr CR3 { "CR3" };
cr CR4 { "CR4" };
cr CR5 { "CR5" };
cr CR6 { "CR6" };
cr CR7 { "CR7" };
cr CR8 { "CR8" };

dr DR0 { "DR0" };
dr DR1 { "DR1" };
dr DR2 { "DR2" };
dr DR3 { "DR3" };
dr DR4 { "DR4" };
dr DR5 { "DR5" };
dr DR6 { "DR6" };
dr DR7 { "DR7" };

st ST;

opmask_reg k0 { "k0" };
opmask_reg k1 { "k1" };
opmask_reg k2 { "k2" };
opmask_reg k3 { "k3" };
opmask_reg k4 { "k4" };
opmask_reg k5 { "k5" };
opmask_reg k6 { "k6" };
opmask_reg k7 { "k7" };

Instruction1_Type1 AAA { { 0x37 }, "AAA: ASCII Adjust After Addition" };
Instruction1_Type1 AAS { { 0x3F }, "AAS: ASCII Adjust AL After Subtraction" };
Instruction1_Type1 CBW { { 0x98 }, "CBW: Convert Byte to Word" };
Instruction1_Type1 CWDE { { 0x98 }, "CWDE: Convert Word to Doubleword" };
Instruction1_Type1 CDQE { { 0x98 }, "CDQE: Convert Doubleword to Quadword" };
Instruction1_Type1 CLC { { 0xF8 }, "CLC: Clear Carry Flag" };
Instruction1_Type1 CLD { { 0xFC }, "CLD: Clear Direction Flag" };
Instruction1_Type1 CLI { { 0xFA }, "CLI: Clear Interrupt Flag" };
Instruction1_Type1 CLTS { { 0x0F, 0x06 }, "CLTS: Clear Task-Switched Flag in CR0" };
Instruction1_Type1 CMC { { 0xF5 }, "CMC: Complement Carry Flag" };
Instruction1_Type1 CMPSB { { 0xA6 }, "CMPSB: Compare String Operands" };
Instruction1_Type1 CMPSW { { 0xA7 }, "CMPSW: Compare String Operands" };
Instruction1_Type1 CMPSD { { 0xA7 }, "CMPSD: Compare String Operands" };
Instruction1_Type1 CMPSQ { { 0xA7 }, "CMPSQ: Compare String Operands" };
Instruction1_Type1 CPUID { { 0x0F, 0xA2 }, "CPUID: CPU Identification" };
Instruction1_Type1 CWD { { 0x99 }, "CWD: Convert Word to Doubleword" };
Instruction1_Type1 CDQ { { 0x99 }, "CDQ: Convert Convert Doubleword to Quadword" };
Instruction1_Type1 CQO { { 0x99 }, "CQO: Convert Quadword to Octaword" };
Instruction1_Type1 DAA { { 0x27 }, "DAA: Decimal Adjust AL after Addition" };
Instruction1_Type1 DAS { { 0x2F }, "DAS: Decimal Adjust AL after Subtraction" };
Instruction1_Type1 EMMS { { 0x0F, 0x77 }, "EMMS: Empty MMX Technology State" };
Instruction1_Type1 ENDBR32 { { 0xF3, 0x0F, 0x1E, 0xFB }, "ENDBR32: Terminate an Indirect Branch in 32-bit and Compatibility Mode" };
Instruction1_Type1 ENDBR64 { { 0xF3, 0x0F, 0x1E, 0xFA }, "ENDBR64: Terminate an Indirect Branch in 64-bit Mode" };
Instruction1_Type1 F2XM1 { { 0xD9, 0xF0 }, "F2XM1: Compute 2^x - 1" };
Instruction1_Type1 FABS { { 0xD9, 0xE1 }, "FABS: Absolute Value" };
Instruction1_Type1 FCHS { { 0xD9, 0xE0 }, "FCHS: Change Sign" };
Instruction1_Type1 FCLEX { { 0x9B, 0xDB, 0xE2 }, "FCLEX: Clear Exceptions" };
Instruction1_Type1 FNCLEX { { 0xDB, 0xE2 }, "FNCLEX: Clear Exceptions" };
Instruction1_Type1 FCOS { { 0xD9, 0xFF }, "FCOS: Cosine" };
Instruction1_Type1 FDECSTP { { 0xD9, 0xF6 }, "FDECSTP: Decrement Stack-Top Pointer" };
Instruction1_Type1 FINCSTP { { 0xD9, 0xF7 }, "FINCSTP: Increment Stack-Top Pointer" };
Instruction1_Type1 FINIT { { 0x9B, 0xDB, 0xE3 }, "FINIT: Initialize Floating-Point Unit" };
Instruction1_Type1 FNINIT { { 0xDB, 0xE3 }, "FNINIT: Initialize Floating-Point Unit" };
Instruction1_Type1 FLD1 { { 0xD9, 0xE8 }, "FLD1: Load Constant" };
Instruction1_Type1 FLDL2T { { 0xD9, 0xE9 }, "FLDL2T: Load Constant" };
Instruction1_Type1 FLDL2E { { 0xD9, 0xEA }, "FLDL2E: Load Constant" };
Instruction1_Type1 FLDPI { { 0xD9, 0xEB }, "FLDPI: Load Constant" };
Instruction1_Type1 FLDLG2 { { 0xD9, 0xEC }, "FLDLG2: Load Constant" };
Instruction1_Type1 FLDLN2 { { 0xD9, 0xED }, "FLDLN2: Load Constant" };
Instruction1_Type1 FLDZ { { 0xD9, 0xEE }, "FLDZ: Load Constant" };
Instruction1_Type1 FNOP { { 0xD9, 0xD0 }, "FNOP: No Operation" };
Instruction1_Type1 FPATAN { { 0xD9, 0xF3 }, "FPATAN: Partial Arctangent" };
Instruction1_Type1 FPREM { { 0xD9, 0xF8 }, "FPREM: Partial Remainder" };
Instruction1_Type1 FPREM1 { { 0xD9, 0xF5 }, "FPREM1: Partial Remainder" };
Instruction1_Type1 FPTAN { { 0xD9, 0xF2 }, "FPTAN: Partial Tangent" };
Instruction1_Type1 FRNDINT { { 0xD9, 0xFC }, "FRNDINT: Round to Integer" };
Instruction1_Type1 FSCALE { { 0xD9, 0xFD }, "FSCALE: Scale" };
Instruction1_Type1 FSINCOS { { 0xD9, 0xFB }, "FSINCOS: Sine and Cosine" };
Instruction1_Type1 FSQRT { { 0xD9, 0xFA }, "FSQRT: Square Root" };
Instruction1_Type1 FTST { { 0xD9, 0xE4 }, "FTST: Test" };
Instruction1_Type1 FXAM { { 0xD9, 0xE5 }, "FXAM: Examine Floating-Point" };
Instruction1_Type1 FXTRACT { { 0xD9, 0xF4 }, "FXTRACT: Extract Exponent and Significand" };
Instruction1_Type1 FYL2X { { 0xD9, 0xF1 }, "FYL2X: Compute y * log2x" };
Instruction1_Type1 FYL2XP1 { { 0xD9, 0xF9 }, "FYL2XP1: Compute y * log2(x +1)" };
Instruction1_Type1 HLT { { 0xF4 }, "HLT: Halt" };
Instruction1_Type1 INT0 { { 0xCE }, "INT0" };
Instruction1_Type1 INT1 { { 0xF1 }, "INT1" };
Instruction1_Type1 INT3 { { 0xCC }, "INT3" };
Instruction1_Type1 INVD { { 0x0F, 0x08 }, "INVD: Invalidate Internal Caches" };
Instruction1_Type1 IRET { { 0xCF }, "IRET: Interrupt Return" };
Instruction1_Type1 IRETD { { 0xCF }, "IRETD: Interrupt Return" };
Instruction1_Type1 IRETQ { { 0xCF }, "IRETQ: Interrupt Return" };
Instruction1_Type1 LAHF { { 0x9F }, "LAHF: Load Status Flags into AH Register" };
Instruction1_Type1 LEAVE { { 0xC9 }, "LEAVE: High Level Procedure Exit" };
Instruction1_Type1 LFENCE { { 0x0F, 0xAE, 0xE8 }, "LFENCE: Load Fence" };
Instruction1_Type1 LOCK { { 0xF0 }, "LOCK: Assert LOCK# Signal Prefix" };
Instruction1_Type1 MFENCE { { 0x0F, 0xAE, 0xF0 }, "MFENCE: Memory Fence" };
Instruction1_Type1 MONITOR { { 0x0F, 0x01, 0xC8 }, "MONITOR: Set Up Monitor Address" };
Instruction1_Type1 MOVSB { { 0xA4 }, "MOVSB: Move Data from String to String" };
Instruction1_Type1 MOVSW { { 0xA5 }, "MOVSW: Move Data from String to String" };
Instruction1_Type1 MOVSD { { 0xA5 }, "MOVSD: Move Data from String to String" };
Instruction1_Type1 MOVSQ { { 0xA5 }, "MOVSQ: Move Data from String to String" };
Instruction1_Type1 MWAIT { { 0x0F, 0x01, 0xC9 }, "MWAIT: Monitor Wait" };
Instruction1_Type1 OUTSB { { 0x6E }, "OUTSB: Output String to Port" };
Instruction1_Type1 OUTSW { { 0x6F }, "OUTSW: Output String to Port" };
Instruction1_Type1 OUTSD { { 0x6F }, "OUTSD: Output String to Port" };
Instruction1_Type1 PAUSE { { 0xF3, 0x90 }, "PAUSE: Spin Loop Hint" };
Instruction1_Type1 POPA { { 0x61 }, "POPA: Pop All General-Purpose Registers" };
Instruction1_Type1 POPAD { { 0x61 }, "POPAD: Pop All General-Purpose Registers" };
Instruction1_Type1 POPF { { 0x9D }, "POPF: Pop Stack into EFLAGS Register" };
Instruction1_Type1 POPFD { { 0x9D }, "POPFD: Pop Stack into EFLAGS Register" };
Instruction1_Type1 POPFQ { { 0x9D }, "POPFQ: Pop Stack into EFLAGS Register" };
Instruction1_Type1 PUSHA { { 0x60 }, "PUSHA: Push All General-Purpose Registers" };
Instruction1_Type1 PUSHAD { { 0x60 }, "PUSHAD: Push All General-Purpose Registers" };
Instruction1_Type1 PUSHF { { 0x9C }, "PUSHF: Push EFLAGS Register onto the Stack" };
Instruction1_Type1 PUSHFD { { 0x9C }, "PUSHFD: Push EFLAGS Register onto the Stack" };
Instruction1_Type1 PUSHFQ { { 0x9C }, "PUSHFQ: Push EFLAGS Register onto the Stack" };
Instruction1_Type1 RDMSR { { 0x0F, 0x32 }, "RDMSR: Read from Model Specific Register" };
