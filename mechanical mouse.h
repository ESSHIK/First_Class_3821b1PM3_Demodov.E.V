#ifndef MECHANICAL MOUSE_H
#define MECHANICAL MOUSE_H
#include"mouse.h"
#pragma once

class mechanicalmouse : public mouse
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);



    protected:
    int rate;
};

#endif // MECHANICAL MOUSE_H
