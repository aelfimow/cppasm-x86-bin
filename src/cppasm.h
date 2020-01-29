/*! \file cppasm.h
    \brief Main header file of the C++ Assembly Generator.
*/
#ifdef CPPASM_H
#error Already included
#else
#define CPPASM_H

#include <string>
#include <vector>
#include <initializer_list>

#include "cppasm_types.h"

#include "OperandEncoding.h"

#include "Instruction_x.h"
#include "Instruction1_Types.h"

#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"

extern r8 AL;
extern r8 AH;
extern r8 BL;
extern r8 BH;
extern r8 CL;
extern r8 CH;
extern r8 DL;
extern r8 DH;
extern r8 SIL;
extern r8 DIL;
extern r8 SPL;
extern r8 R8L;
extern r8 R9L;
extern r8 R10L;
extern r8 R11L;
extern r8 R12L;
extern r8 R13L;
extern r8 R14L;
extern r8 R15L;

extern r16 AX;
extern r16 BX;
extern r16 CX;
extern r16 DX;
extern r16 BP;
extern r16 SI;
extern r16 DI;
extern r16 SP;
extern r16 R8W;
extern r16 R9W;
extern r16 R10W;
extern r16 R11W;
extern r16 R12W;
extern r16 R13W;
extern r16 R14W;
extern r16 R15W;

extern r32 EAX;
extern r32 EBX;
extern r32 ECX;
extern r32 EDX;
extern r32 EBP;
extern r32 ESI;
extern r32 EDI;
extern r32 ESP;
extern r32 R8D;
extern r32 R9D;
extern r32 R10D;
extern r32 R11D;
extern r32 R12D;
extern r32 R13D;
extern r32 R14D;
extern r32 R15D;

extern r64 RAX;
extern r64 RBX;
extern r64 RCX;
extern r64 RDX;
extern r64 RBP;
extern r64 RSI;
extern r64 RDI;
extern r64 RSP;
extern r64 R8;
extern r64 R9;
extern r64 R10;
extern r64 R11;
extern r64 R12;
extern r64 R13;
extern r64 R14;
extern r64 R15;

extern Instruction1_Type1 AAA;
extern Instruction1_Type1 AAS;
extern Instruction1_Type1 CBW;
extern Instruction1_Type1 CWDE;
extern Instruction1_Type1 CDQE;
extern Instruction1_Type1 CLC;
extern Instruction1_Type1 CLD;
extern Instruction1_Type1 CLI;
extern Instruction1_Type1 CLTS;
extern Instruction1_Type1 CMC;
extern Instruction1_Type1 CMPSB;
extern Instruction1_Type1 CMPSW;
extern Instruction1_Type1 CMPSD;
extern Instruction1_Type1 CMPSQ;
extern Instruction1_Type1 CPUID;
extern Instruction1_Type1 CWD;
extern Instruction1_Type1 CDQ;
extern Instruction1_Type1 CQO;
extern Instruction1_Type1 DAA;
extern Instruction1_Type1 DAS;
extern Instruction1_Type1 EMMS;
extern Instruction1_Type1 ENDBR32;
extern Instruction1_Type1 ENDBR64;
extern Instruction1_Type1 F2XM1;
extern Instruction1_Type1 FABS;
extern Instruction1_Type1 FCHS;
extern Instruction1_Type1 FCLEX;
extern Instruction1_Type1 FNCLEX;
extern Instruction1_Type1 FCOS;
extern Instruction1_Type1 FDECSTP;
extern Instruction1_Type1 FINCSTP;
extern Instruction1_Type1 FINIT;
extern Instruction1_Type1 FNINIT;
extern Instruction1_Type1 FLD1;
extern Instruction1_Type1 FLDL2T;
extern Instruction1_Type1 FLDL2E;
extern Instruction1_Type1 FLDPI;
extern Instruction1_Type1 FLDLG2;
extern Instruction1_Type1 FLDLN2;
extern Instruction1_Type1 FLDZ;
extern Instruction1_Type1 FNOP;
extern Instruction1_Type1 FPATAN;
extern Instruction1_Type1 FPREM;
extern Instruction1_Type1 FPREM1;
extern Instruction1_Type1 FPTAN;
extern Instruction1_Type1 FRNDINT;
extern Instruction1_Type1 FSCALE;
extern Instruction1_Type1 FSINCOS;
extern Instruction1_Type1 FSQRT;
extern Instruction1_Type1 FTST;
extern Instruction1_Type1 FXAM;
extern Instruction1_Type1 FXTRACT;
extern Instruction1_Type1 FYL2X;
extern Instruction1_Type1 FYL2XP1;
extern Instruction1_Type1 HLT;
extern Instruction1_Type1 INT0;
extern Instruction1_Type1 INT1;
extern Instruction1_Type1 INT3;
extern Instruction1_Type1 INVD;
extern Instruction1_Type1 IRET;
extern Instruction1_Type1 IRETD;
extern Instruction1_Type1 IRETQ;
extern Instruction1_Type1 LAHF;
extern Instruction1_Type1 LEAVE;
extern Instruction1_Type1 LFENCE;
extern Instruction1_Type1 LOCK;

#endif
