#include "plug-in headphones.h"
#include<iostream>

using namespace std;


int pluginheadphones::GetRate()
{
    return rate;
}

void pluginheadphones::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}

void pluginheadphones::vibor()
{
    cout<<" your choice plug-in headphones"<<endl;
}
