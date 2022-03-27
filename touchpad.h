#ifndef TOUCHPAD_H
#define TOUCHPAD_H
#include"mouse.h"
#pragma once
#include<string>

class touchpad : public mouse
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);

        string GetColor();
        void SetColor(string enColor);


    protected:
    int rate;
    string color;
};

#endif // TOUCHPAD_H
