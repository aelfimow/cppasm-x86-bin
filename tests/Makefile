CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64

CPPASM_OBJ = ../src/obj/*.o

INCDIR = ../src

all: compile link generate test1

.PHONY: compile
compile:
	${CXX} -c test1.cpp -o test1.o -I${INCDIR} ${CXXFLAGS}

.PHONY: link
link:
	${CXX} test1.o ${CPPASM_OBJ} -o test1.exe ${CXXFLAGS}

.PHONY: generate
generate:
	test1.exe > test1-gen.S

.PHONY: test1
test1:
	${AS} test1-gen.S ${ASFLAGS64} -o test1-gen.o
