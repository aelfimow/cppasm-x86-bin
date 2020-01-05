/*! \file Instruction_x.h
    \brief A template class representing instructions.
*/
#ifdef INSTRUCTION_X_H
#error Already included
#else
#define INSTRUCTION_X_H

template
<
    class Op1
>
class Instruction_1 :
    public Op1
{
    public:
        Instruction_1() = default;
        ~Instruction_1() = default;

        using Op1::operator();
};

#endif
