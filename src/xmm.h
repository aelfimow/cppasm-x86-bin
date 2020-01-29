/*! \file xmm.h
    \brief Class representing XMM registers.
*/
#ifdef XMM_H
#error Already included
#else
#define XMM_H

class xmm
{
    public:
        xmm(comment_t const &name) :
            m_name { name }
        {
        }

        ~xmm() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        xmm() = delete;
        xmm(xmm const &instance) = delete;
        xmm(xmm &&instance) = delete;
        xmm &operator=(xmm const &instance) = delete;
        xmm &operator=(xmm &&instance) = delete;
};

#endif
