CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS32  = --32

CPPASM_OBJ = ../src/obj/*.o

INCDIR = ../src

OBJDUMP = objdump

all: compile link generate test1

.PHONY: compile
compile:
	${CXX} -c test1.cpp -o test1.o -I${INCDIR} ${CXXFLAGS}

.PHONY: link
link:
	${CXX} test1.o ${CPPASM_OBJ} -o test1.exe ${CXXFLAGS}

.PHONY: generate
generate:
	./test1.exe > test1-gen.S

.PHONY: test1
test1:
	${AS} test1-gen.S ${ASFLAGS32} -o test1-gen.o
	${OBJDUMP} --disassemble-all test1-gen.o > test1-gen-dump.txt
