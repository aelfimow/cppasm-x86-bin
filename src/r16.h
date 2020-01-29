/*! \file r16.h
    \brief Class representing 16-bit registers.
*/
#ifdef R16_H
#error Already included
#else
#define R16_H

class r16
{
    public:
        r16(comment_t const &name) :
            m_name { name }
        {
        }

        ~r16() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        r16() = delete;
        r16(r16 const &instance) = delete;
        r16(r16 &&instance) = delete;
        r16 &operator=(r16 const &instance) = delete;
        r16 &operator=(r16 &&instance) = delete;
};

#endif
