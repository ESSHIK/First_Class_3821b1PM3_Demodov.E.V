#include "full-size headphones.h"
#include<iostream>

using namespace std;


int fullszheadphones::GetRate()
{
    return rate;
}

void fullszheadphones::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}
/*fullszheadphones::fullszheadphones (int rate)
{
    this->rate = rate;
}
*/
void fullszheadphones::vibor()
{
    cout<<" your choice full-size headphones"<<endl;
}
