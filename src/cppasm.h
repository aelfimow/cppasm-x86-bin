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
#include "xmm.h"
#include "ymm.h"
#include "zmm.h"
#include "mm.h"
#include "Sreg.h"
#include "cr.h"
#include "dr.h"
#include "opmask_reg.h"
#include "st.h"

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

extern xmm XMM0;
extern xmm XMM1;
extern xmm XMM2;
extern xmm XMM3;
extern xmm XMM4;
extern xmm XMM5;
extern xmm XMM6;
extern xmm XMM7;
extern xmm XMM8;
extern xmm XMM9;
extern xmm XMM10;
extern xmm XMM11;
extern xmm XMM12;
extern xmm XMM13;
extern xmm XMM14;
extern xmm XMM15;

extern ymm YMM0;
extern ymm YMM1;
extern ymm YMM2;
extern ymm YMM3;
extern ymm YMM4;
extern ymm YMM5;
extern ymm YMM6;
extern ymm YMM7;
extern ymm YMM8;
extern ymm YMM9;
extern ymm YMM10;
extern ymm YMM11;
extern ymm YMM12;
extern ymm YMM13;
extern ymm YMM14;
extern ymm YMM15;

extern zmm ZMM0;
extern zmm ZMM1;
extern zmm ZMM2;
extern zmm ZMM3;
extern zmm ZMM4;
extern zmm ZMM5;
extern zmm ZMM6;
extern zmm ZMM7;
extern zmm ZMM8;
extern zmm ZMM9;
extern zmm ZMM10;
extern zmm ZMM11;
extern zmm ZMM12;
extern zmm ZMM13;
extern zmm ZMM14;
extern zmm ZMM15;
extern zmm ZMM16;
extern zmm ZMM17;
extern zmm ZMM18;
extern zmm ZMM19;
extern zmm ZMM20;
extern zmm ZMM21;
extern zmm ZMM22;
extern zmm ZMM23;
extern zmm ZMM24;
extern zmm ZMM25;
extern zmm ZMM26;
extern zmm ZMM27;
extern zmm ZMM28;
extern zmm ZMM29;
extern zmm ZMM30;
extern zmm ZMM31;

extern mm MM0;
extern mm MM1;
extern mm MM2;
extern mm MM3;
extern mm MM4;
extern mm MM5;
extern mm MM6;
extern mm MM7;

extern Sreg CS;
extern Sreg DS;
extern Sreg SS;
extern Sreg ES;
extern Sreg FS;
extern Sreg GS;

extern cr CR0;
extern cr CR1;
extern cr CR2;
extern cr CR3;
extern cr CR4;
extern cr CR5;
extern cr CR6;
extern cr CR7;
extern cr CR8;

extern dr DR0;
extern dr DR1;
extern dr DR2;
extern dr DR3;
extern dr DR4;
extern dr DR5;
extern dr DR6;
extern dr DR7;

extern st ST;

extern opmask_reg k0;
extern opmask_reg k1;
extern opmask_reg k2;
extern opmask_reg k3;
extern opmask_reg k4;
extern opmask_reg k5;
extern opmask_reg k6;
extern opmask_reg k7;

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
extern Instruction1_Type1 MFENCE;
extern Instruction1_Type1 MONITOR;
extern Instruction1_Type1 MOVSB;
extern Instruction1_Type1 MOVSW;
extern Instruction1_Type1 MOVSD;
extern Instruction1_Type1 MOVSQ;
extern Instruction1_Type1 MWAIT;
extern Instruction1_Type1 OUTSB;
extern Instruction1_Type1 OUTSW;
extern Instruction1_Type1 OUTSD;
extern Instruction1_Type1 PAUSE;
extern Instruction1_Type1 POPA;
extern Instruction1_Type1 POPAD;
extern Instruction1_Type1 POPF;
extern Instruction1_Type1 POPFD;
extern Instruction1_Type1 POPFQ;
extern Instruction1_Type1 PUSHA;
extern Instruction1_Type1 PUSHAD;
extern Instruction1_Type1 PUSHF;
extern Instruction1_Type1 PUSHFD;
extern Instruction1_Type1 PUSHFQ;
extern Instruction1_Type1 RDMSR;
extern Instruction1_Type1 RDPKRU;
extern Instruction1_Type1 RDPMC;
extern Instruction1_Type1 RDTSC;
extern Instruction1_Type1 RDTSCP;
extern Instruction1_Type1 RSM;
extern Instruction1_Type1 SAHF;
extern Instruction1_Type1 SAVEPREVSSP;

#endif
