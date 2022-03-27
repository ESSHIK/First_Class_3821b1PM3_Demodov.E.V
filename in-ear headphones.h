#ifndef IN-EAR HEADPHONES_H
#define IN-EAR HEADPHONES_H
#include"headphones.h"
#pragma once

class inearheadphones : public headphones
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);



    protected:
    int rate;
};
#endif // IN-EAR HEADPHONES_H
