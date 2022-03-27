#ifndef HEADPHONES_H
#define HEADPHONES_H
#include"garnitura.h"
#pragma once


class headphones : public garnitura
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);
        headphones(int rate, int price);


    protected:
    int rate;
};

#endif // HEADPHONES_H
