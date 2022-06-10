#ifndef COACH_H
#define COACH_H


class Coach
{
    public:
        Coach();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // COACH_H
