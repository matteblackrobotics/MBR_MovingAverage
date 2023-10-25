#ifndef MBR_movingAverage_h
#define MBR_movingAverage_h

#include <Arduino.h>

class MovingAverage
{
    public:
        MovingAverage(const int mSize);
        float movingAverage(float inputData);
        void reset();
        void printAverage();
        float mAverage;
    
    private:
        int* m; // points to array m in memory
        int mSize;
        int mIndex;
        float mSum; 
};

#endif