# AAA: ASCII Adjust After Addition
.byte 0x37
# AAS: ASCII Adjust AL After Subtraction
.byte 0x3F
# CBW: Convert Byte to Word
.byte 0x98
# CWDE: Convert Word to Doubleword
.byte 0x98
# CDQE: Convert Doubleword to Quadword
.byte 0x98
# CLC: Clear Carry Flag
.byte 0xF8
# CLD: Clear Direction Flag
.byte 0xFC
# CLI: Clear Interrupt Flag
.byte 0xFA
# CLTS: Clear Task-Switched Flag in CR0
.byte 0x0F, 0x06
# CMC: Complement Carry Flag
.byte 0xF5
# CMPSB: Compare String Operands
.byte 0xA6
# CMPSW: Compare String Operands
.byte 0xA7
# CMPSD: Compare String Operands
.byte 0xA7
# CMPSQ: Compare String Operands
.byte 0xA7
# CPUID: CPU Identification
.byte 0x0F, 0xA2
# CWD: Convert Word to Doubleword
.byte 0x99
# CDQ: Convert Convert Doubleword to Quadword
.byte 0x99
# CQO: Convert Quadword to Octaword
.byte 0x99
# DAA: Decimal Adjust AL after Addition
.byte 0x27
# DAS: Decimal Adjust AL after Subtraction
.byte 0x2F
# EMMS: Empty MMX Technology State
.byte 0x0F, 0x77
# ENDBR32: Terminate an Indirect Branch in 32-bit and Compatibility Mode
.byte 0xF3, 0x0F, 0x1E, 0xFB
# ENDBR64: Terminate an Indirect Branch in 64-bit Mode
.byte 0xF3, 0x0F, 0x1E, 0xFA
# F2XM1: Compute 2^x - 1
.byte 0xD9, 0xF0
# FABS: Absolute Value
.byte 0xD9, 0xE1
# FCHS: Change Sign
.byte 0xD9, 0xE0
# FCLEX: Clear Exceptions
.byte 0x9B, 0xDB, 0xE2
# FNCLEX: Clear Exceptions
.byte 0xDB, 0xE2
# FCOS: Cosine
.byte 0xD9, 0xFF
# FDECSTP: Decrement Stack-Top Pointer
.byte 0xD9, 0xF6
# FINCSTP: Increment Stack-Top Pointer
.byte 0xD9, 0xF7
# FINIT: Initialize Floating-Point Unit
.byte 0x9B, 0xDB, 0xE3
# FNINIT: Initialize Floating-Point Unit
.byte 0xDB, 0xE3
# FLD1: Load Constant
.byte 0xD9, 0xE8
# FLDL2T: Load Constant
.byte 0xD9, 0xE9
# FLDL2E: Load Constant
.byte 0xD9, 0xEA
# FLDPI: Load Constant
.byte 0xD9, 0xEB
# FLDLG2: Load Constant
.byte 0xD9, 0xEC
# FLDLN2: Load Constant
.byte 0xD9, 0xED
# FLDZ: Load Constant
.byte 0xD9, 0xEE
# FNOP: No Operation
.byte 0xD9, 0xD0
# FPATAN: Partial Arctangent
.byte 0xD9, 0xF3
# FPREM: Partial Remainder
.byte 0xD9, 0xF8
# FPREM1: Partial Remainder
.byte 0xD9, 0xF5
# FPTAN: Partial Tangent
.byte 0xD9, 0xF2
# FRNDINT: Round to Integer
.byte 0xD9, 0xFC
# FSCALE: Scale
.byte 0xD9, 0xFD
# FSINCOS: Sine and Cosine
.byte 0xD9, 0xFB
# FSQRT: Square Root
.byte 0xD9, 0xFA
# FTST: Test
.byte 0xD9, 0xE4
# FXAM: Examine Floating-Point
.byte 0xD9, 0xE5
# FXTRACT: Extract Exponent and Significand
.byte 0xD9, 0xF4
# FYL2X: Compute y * log2x
.byte 0xD9, 0xF1
# FYL2XP1: Compute y * log2(x +1)
.byte 0xD9, 0xF9
# HLT: Halt
.byte 0xF4
# INT0
.byte 0xCE
# INT1
.byte 0xF1
# INT3
.byte 0xCC
# INVD: Invalidate Internal Caches
.byte 0x0F, 0x08
# IRET: Interrupt Return
.byte 0xCF
# IRETD: Interrupt Return
.byte 0xCF
# IRETQ: Interrupt Return
.byte 0xCF
# LAHF: Load Status Flags into AH Register
.byte 0x9F
# LEAVE: High Level Procedure Exit
.byte 0xC9
# LFENCE: Load Fence
.byte 0x0F, 0xAE, 0xE8
# LOCK: Assert LOCK# Signal Prefix
.byte 0xF0
# MFENCE: Memory Fence
.byte 0x0F, 0xAE, 0xF0
# MONITOR: Set Up Monitor Address
.byte 0x0F, 0x01, 0xC8
# MOVSB: Move Data from String to String
.byte 0xA4
# MOVSW: Move Data from String to String
.byte 0xA5
# MOVSD: Move Data from String to String
.byte 0xA5
# MOVSQ: Move Data from String to String
.byte 0xA5
# MWAIT: Monitor Wait
.byte 0x0F, 0x01, 0xC9
# OUTSB: Output String to Port
.byte 0x6E
# OUTSW: Output String to Port
.byte 0x6F
# OUTSD: Output String to Port
.byte 0x6F
# PAUSE: Spin Loop Hint
.byte 0xF3, 0x90
# POPA: Pop All General-Purpose Registers
.byte 0x61
# POPAD: Pop All General-Purpose Registers
.byte 0x61
# POPF: Pop Stack into EFLAGS Register
.byte 0x9D
# POPFD: Pop Stack into EFLAGS Register
.byte 0x9D
# POPFQ: Pop Stack into EFLAGS Register
.byte 0x9D
# PUSHA: Push All General-Purpose Registers
.byte 0x60
# PUSHAD: Push All General-Purpose Registers
.byte 0x60
# PUSHF: Push EFLAGS Register onto the Stack
.byte 0x9C
# PUSHFD: Push EFLAGS Register onto the Stack
.byte 0x9C
# PUSHFQ: Push EFLAGS Register onto the Stack
.byte 0x9C
# RDMSR: Read from Model Specific Register
.byte 0x0F, 0x32
# RDPKRU: Read Protection Key Rights for User Pages
.byte 0x0F, 0x01, 0xEE
# RDPMC: Read Performance-Monitoring Counters
.byte 0x0F, 0x33
# RDTSC: Read Time-Stamp Counter
.byte 0x0F, 0x31
# RDTSCP: Read Time-Stamp Counter and Processor ID
.byte 0x0F, 0x01, 0xF9
# RSM: Resume from System Management Mode
.byte 0x0F, 0xAA
# SAHF: Store AH into Flags
.byte 0x9E
# SAVEPREVSSP: Save Previous Shadow Stack Pointer
.byte 0xF3, 0x0F, 0x01, 0xEA
# SETSSBSY: Mark Shadow Stack Busy
.byte 0xF3, 0x0F, 0x01, 0xE8
# SFENCE: Store Fence
.byte 0x0F, 0xAE, 0xF8
# STAC: Set AC Flag in EFLAGS Register
.byte 0x0F, 0x01, 0xCB
# STC: Set Carry Flag
.byte 0xF9
# STD: Set Direction Flag
.byte 0xFD
# STI: Set Interrupt Flag
.byte 0xFB
# STOSB: Store String
.byte 0xAA
# STOSW: Store String
.byte 0xAB
# STOSD: Store String
.byte 0xAB
# STOSQ: Store String
.byte 0xAB
# SWAPGS: Swap GS Base Register
.byte 0x0F, 0x01, 0xF8
# SYSCALL: Fast System Call
.byte 0x0F, 0x05
# SYSENTER: Fast System Call
.byte 0x0F, 0x34
# SYSEXIT: Fast Return from Fast System Call
.byte 0x0F, 0x35
# SYSRET: Return From Fast System Call
.byte 0x0F, 0x07
# UD2: Undefined Instruction 2
.byte 0x0F, 0x0B
# WAIT: Wait
.byte 0x9B
# FWAIT: Wait
.byte 0x9B
# WBINVD: Write Back and Invalidate Cache
.byte 0x0F, 0x09
# WRMSR: Write to Model Specific Register
.byte 0x0F, 0x30
# WRPKRU: Write Data to User Page Key Register
.byte 0x0F, 0x01, 0xEF
