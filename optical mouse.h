#ifndef OPTICAL MOUSE_H
#define OPTICAL MOUSE_H
#include"mouse.h"
#pragma once

class opticalmouse : public mouse
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);


    protected:
    int rate;
};

#endif // OPTICAL MOUSE_H
