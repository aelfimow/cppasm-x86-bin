/*! \file mm.h
    \brief Class representing MMX registers.
*/
#ifdef MM_H
#error Already included
#else
#define MM_H

class mm
{
    public:
        mm(comment_t const &name) :
            m_name { name }
        {
        }

        ~mm() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        mm() = delete;
        mm(mm const &instance) = delete;
        mm(mm &&instance) = delete;
        mm &operator=(mm const &instance) = delete;
        mm &operator=(mm &&instance) = delete;
};

#endif
