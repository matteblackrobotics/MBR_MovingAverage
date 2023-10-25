#include <Arduino.h>
#include "MBR_MovingAverage.h"

// Constructor
MBR_MovingAverage::MBR_MovingAverage(int _size){
    mSize = _size;
    m = new int[mSize]; // allows for dynamic memory allocation determined at runtime, not predefined size
    reset();
}

// sets varables to 0
void MBR_MovingAverage::reset(){
    for(int i=0; i<mSize; i++){
        m[i] = 0;
    }
    mIndex = 0;
    mSum = 0;
}

// finds moving average
float MBR_MovingAverage::movingAverage(float inputData){
    mSum = mSum - m[mIndex];
    m[mIndex] = inputData;
    mSum = mSum + m[mIndex];
    mAverage = mSum / mSize;
    mIndex++;
    if(mIndex >= mSize){mIndex = 0;}
    return mAverage;
}

void MBR_MovingAverage::printAverage(){
    Serial.print(" mAverage: ");
    Serial.print(mAverage);
}