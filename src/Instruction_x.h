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

        template <class A, class B> Instruction_1(A arg1, B arg2) :
            Op1 { arg1, arg2 }
        {
        }

        template <class A, class B, class C> Instruction_1(A arg1, B arg2, C arg3) :
            Op1 { arg1, arg2, arg3 }
        {
        }

        ~Instruction_1() = default;

        using Op1::operator();
};

#endif
