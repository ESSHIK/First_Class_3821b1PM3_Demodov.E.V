#include "in-ear headphones.h"
#include<iostream>

using namespace std;


int inearheadphones::GetRate()
{
    return rate;
}

void inearheadphones::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}

void inearheadphones::vibor()
{
    cout<<" your choice in-ear headphones"<<endl;
}

