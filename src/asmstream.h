/*! \file asmstream.h
    \brief Class for Assembly Stream.
*/
#ifdef ASM_STREAM_H
#error Already included
#else
#define ASM_STREAM_H

/*! \class Assembly stream */
class asmstream
{
    public:
        asmstream();
        ~asmstream();

        void comment(comment_t const &cmt);
        void byte(std::vector<opcode_t> const &seq);

    private:
        std::string to_str(opcode_t const &c) const;

    public:
        asmstream(const asmstream &instance) = delete;
        asmstream(asmstream &&instance) = delete;
        asmstream &operator=(const asmstream &instance) = delete;
        asmstream &operator=(asmstream &&instance) = delete;
};

#endif
