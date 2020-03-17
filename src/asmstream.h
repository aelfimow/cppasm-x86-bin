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

    public:
        asmstream(const asmstream &instance) = delete;
        asmstream(asmstream &&instance) = delete;
        asmstream &operator=(const asmstream &instance) = delete;
        asmstream &operator=(asmstream &&instance) = delete;
};

#endif
