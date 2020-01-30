/*! \file opmask_reg.h
    \brief Class representing opmask_reg registers.
*/
#ifdef OPMASK_REG_H
#error Already included
#else
#define OPMASK_REG_H

class opmask_reg
{
    public:
        opmask_reg(comment_t const &name) :
            m_name { name }
        {
        }

        ~opmask_reg() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        opmask_reg() = delete;
        opmask_reg(opmask_reg const &instance) = delete;
        opmask_reg(opmask_reg &&instance) = delete;
        opmask_reg &operator=(opmask_reg const &instance) = delete;
        opmask_reg &operator=(opmask_reg &&instance) = delete;
};

#endif
