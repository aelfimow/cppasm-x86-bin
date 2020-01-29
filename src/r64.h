/*! \file r64.h
    \brief Class representing 64-bit registers.
*/
#ifdef R64_H
#error Already included
#else
#define R64_H

class r64
{
    public:
        r64(comment_t const &name) :
            m_name { name }
        {
        }

        ~r64() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        r64() = delete;
        r64(r64 const &instance) = delete;
        r64(r64 &&instance) = delete;
        r64 &operator=(r64 const &instance) = delete;
        r64 &operator=(r64 &&instance) = delete;
};

#endif
