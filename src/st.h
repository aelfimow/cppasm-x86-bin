/*! \file st.h
    \brief Class representing st registers.
*/
#ifdef ST_H
#error Already included
#else
#define ST_H

class st
{
    public:
        st(comment_t const &name) :
            m_name { name }
        {
        }

        ~st() = default;

        comment_t name() const;

    private:
        comment_t const m_name;

    private:
        st() = delete;
        st(st const &instance) = delete;
        st(st &&instance) = delete;
        st &operator=(st const &instance) = delete;
        st &operator=(st &&instance) = delete;
};

#endif
