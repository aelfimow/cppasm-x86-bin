/*! \file r8.h
    \brief Class representing 8-bit registers.
*/
#ifdef R8_H
#error Already included
#else
#define R8_H

class r8
{
    public:
        r8(comment_t const &name) :
            m_name { name }
        {
        }

        ~r8() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        r8() = delete;
        r8(r8 const &instance) = delete;
        r8(r8 &&instance) = delete;
        r8 &operator=(r8 const &instance) = delete;
        r8 &operator=(r8 &&instance) = delete;
};

#endif
