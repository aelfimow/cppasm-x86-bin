/*! \file cr.h
    \brief Class representing cr registers.
*/
#ifdef CR_H
#error Already included
#else
#define CR_H

class cr
{
    public:
        cr(comment_t const &name) :
            m_name { name }
        {
        }

        ~cr() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        cr() = delete;
        cr(cr const &instance) = delete;
        cr(cr &&instance) = delete;
        cr &operator=(cr const &instance) = delete;
        cr &operator=(cr &&instance) = delete;
};

#endif
