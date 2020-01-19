/*! \file cppasm.cpp
    \brief Main file of the C++ Assembly Generator.
*/

#include "cppasm.h"

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
