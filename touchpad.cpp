#include "touchpad.h"
#include<iostream>

#include<string>
using namespace std;



int touchpad::GetRate()
{
    return rate;
}

void touchpad::SetRate(int enRate)
{
    if(enRate > 0)
    {
        rate == enRate;
    }
}

string touchpad::GetColor()
{
    return color;
}

void touchpad::SetColor(string enColor)
{
    if(enColor !="")
    {
        color == enColor;
    }
}

void touchpad::vibor()
{
    cout<<" your choice touchpad"<<endl;
}
