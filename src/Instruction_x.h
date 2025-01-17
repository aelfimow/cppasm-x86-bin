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
        Instruction_1() = delete;

        Instruction_1(opcode_seq_t const &opc, comment_t const &c) :
            Op1 { opc, c }
        {
        }

        ~Instruction_1() = default;

        using Op1::operator();
};

#endif
