#ifndef FULL-SIZE HEADPHONES_H
#define FULL-SIZE HEADPHONES_H
#include"headphones.h"
#pragma once

class fullszheadphones : public headphones
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);


    protected:
    int rate;
};
#endif
