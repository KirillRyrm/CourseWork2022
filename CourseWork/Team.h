#ifndef TEAM_H
#define TEAM_H


class Team
{
    public:
        Team();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // TEAM_H
