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

        ZO(opcode_seq_t const &opc, comment_t const &c) :
            m_opc { opc },
            m_c { c }
        {
        }

        virtual ~ZO() = default;

        void operator()()
        {
            cppasm_stream.comment(m_c);
            cppasm_stream.byte(m_opc);
        }

    private:
        std::vector<opcode_t> const m_opc;
        comment_t const m_c;
};

#endif
