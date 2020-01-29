/*! \file zmm.h
    \brief Class representing ZMM registers.
*/
#ifdef ZMM_H
#error Already included
#else
#define ZMM_H

class zmm
{
    public:
        zmm(comment_t const &name) :
            m_name { name }
        {
        }

        ~zmm() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        zmm() = delete;
        zmm(zmm const &instance) = delete;
        zmm(zmm &&instance) = delete;
        zmm &operator=(zmm const &instance) = delete;
        zmm &operator=(zmm &&instance) = delete;
};

#endif
