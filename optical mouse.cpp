#include "optical mouse.h"
#include<iostream>

using namespace std;


int opticalmouse::GetRate()
{
    return rate;
}

void opticalmouse::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}

void opticalmouse::vibor()
{
    cout<<" your choice optical mouse"<<endl;
}
