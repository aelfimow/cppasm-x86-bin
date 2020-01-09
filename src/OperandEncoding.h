/*! \file OperandEncoding.h
    \brief Operand Encoding
*/
#ifdef OPERAND_ENCODING_H
#error Already included
#else
#define OPERAND_ENCODING_H

/*! Common base class */
class OpEn
{
    public:
        OpEn() = default;
        virtual ~OpEn() = default;

        OpEn(OpEn const &instance) = delete;
        OpEn(OpEn &&instance) = delete;
        OpEn &operator=(OpEn const &instance) = delete;
        OpEn &operator=(OpEn &&instance) = delete;
};

/*! Zero operands encoding */
class ZO: public OpEn
{
    public:
        ZO() = delete;

        ZO(opcode_t opc, comment_t const &c) :
            m_1 { true },
            m_opc { opc },
            m_2 { false },
            m_opc1 { },
            m_opc2 { },
            m_c { c }
        {
        }

        ZO(opcode_t opc1, opcode_t opc2, comment_t const &c) :
            m_1 { false },
            m_opc { },
            m_2 { true },
            m_opc1 { opc1 },
            m_opc2 { opc2 },
            m_c { c }
        {
        }

        virtual ~ZO() = default;

        void operator()()
        {
        }

    private:
        bool const m_1;
        opcode_t const m_opc;

        bool const m_2;
        opcode_t const m_opc1;
        opcode_t const m_opc2;

        comment_t const m_c;
};

#endif
