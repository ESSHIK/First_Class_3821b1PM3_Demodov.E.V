#ifndef OVERHEA DHEADPHONES_H
#define OVERHEAD HEADPHONES_H
#include"headphones.h"
#pragma once

class overheadheadphones : public headphones
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);



    protected:
    int rate;
};

#endif // OVERHEAD HEADPHONES_H
