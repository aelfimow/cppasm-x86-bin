/*! \file Sreg.h
    \brief Class representing Sreg registers.
*/
#ifdef SREG_H
#error Already included
#else
#define SREG_H

class Sreg
{
    public:
        Sreg(comment_t const &name) :
            m_name { name }
        {
        }

        ~Sreg() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        Sreg() = delete;
        Sreg(Sreg const &instance) = delete;
        Sreg(Sreg &&instance) = delete;
        Sreg &operator=(Sreg const &instance) = delete;
        Sreg &operator=(Sreg &&instance) = delete;
};

#endif
