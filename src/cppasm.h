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

#endif
