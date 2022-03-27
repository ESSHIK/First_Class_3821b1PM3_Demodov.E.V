#include "mouse.h"
#include<iostream>

using namespace std;


int mouse::GetRate()
{
    return rate;
}

void mouse::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}
mouse::mouse(int rate, int price): garnitura(price)
{
    this->rate = rate;
}

void mouse::vibor()
{
    cout<<" your choice mouse"<<endl;
}
