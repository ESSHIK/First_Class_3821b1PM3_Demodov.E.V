#include "headphones.h"
#include<iostream>

using namespace std;


int headphones::GetRate()
{
    return rate;
}

void headphones::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}
headphones::headphones(int rate,int price): garnitura(price)
{
    this->rate = rate;
}

void headphones::vibor()
{
    cout<<" your choice headphones"<<endl;
}
