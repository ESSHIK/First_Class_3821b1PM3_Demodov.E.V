#ifndef MOUSE_H
#define MOUSE_H
#include"garnitura.h"
#pragma once


class mouse : public garnitura
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);
        mouse(int rate, int price);


    protected:
    int rate;
};

#endif // MOUSE_H
