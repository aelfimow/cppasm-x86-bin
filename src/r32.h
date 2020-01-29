/*! \file r32.h
    \brief Class representing 32-bit registers.
*/
#ifdef R32_H
#error Already included
#else
#define R32_H

class r32
{
    public:
        r32(comment_t const &name) :
            m_name { name }
        {
        }

        ~r32() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        r32() = delete;
        r32(r32 const &instance) = delete;
        r32(r32 &&instance) = delete;
        r32 &operator=(r32 const &instance) = delete;
        r32 &operator=(r32 &&instance) = delete;
};

#endif
