#ifndef MBR_MovingAverage_h
#define MBR_MovingAverage_h

#include <Arduino.h>

class MBR_MovingAverage
{
    public:
        MBR_MovingAverage(const int mSize);
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