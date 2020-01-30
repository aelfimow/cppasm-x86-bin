/*! \file dr.h
    \brief Class representing dr registers.
*/
#ifdef DR_H
#error Already included
#else
#define DR_H

class dr
{
    public:
        dr(comment_t const &name) :
            m_name { name }
        {
        }

        ~dr() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        dr() = delete;
        dr(dr const &instance) = delete;
        dr(dr &&instance) = delete;
        dr &operator=(dr const &instance) = delete;
        dr &operator=(dr &&instance) = delete;
};

#endif
