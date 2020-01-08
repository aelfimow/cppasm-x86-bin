/*! \file cppasm.cpp
    \brief Main file of the C++ Assembly Generator.
*/

#include "cppasm.h"

Instruction1_Type1 AAA { 0x37, "AAA - ASCII Adjust After Addition" };
Instruction1_Type1 AAS { 0x3F, "AAS - ASCII Adjust AL After Subtraction" };
Instruction1_Type1 CBW { 0x98, "CBW - Convert Byte to Word" };
Instruction1_Type1 CWDE { 0x98, "CWDE - Convert Word to Doubleword" };
Instruction1_Type1 CDQE { 0x98, "CDQE - Convert Doubleword to Quadword" };
