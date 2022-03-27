#include "mechanical mouse.h"
#include<iostream>

using namespace std;


int mechanicalmouse::GetRate()
{
    return rate;
}

void mechanicalmouse::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}

void mechanicalmouse::vibor()
{
    cout<<" your choice mechanical mouse"<<endl;
}

