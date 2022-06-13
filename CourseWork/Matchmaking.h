#ifndef MATCHMAKING_H
#define MATCHMAKING_H


class Matchmaking
{
    public:
        Matchmaking();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // MATCHMAKING_H
