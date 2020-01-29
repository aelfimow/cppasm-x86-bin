/*! \file ymm.h
    \brief Class representing YMM registers.
*/
#ifdef YMM_H
#error Already included
#else
#define YMM_H

class ymm
{
    public:
        ymm(comment_t const &name) :
            m_name { name }
        {
        }

        ~ymm() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        ymm() = delete;
        ymm(ymm const &instance) = delete;
        ymm(ymm &&instance) = delete;
        ymm &operator=(ymm const &instance) = delete;
        ymm &operator=(ymm &&instance) = delete;
};

#endif
