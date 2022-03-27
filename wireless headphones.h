#ifndef PLUG-IN HEADPHONES_H
#define PLUG-IN HEADPHONES_H
#include"headphones.h"
#pragma once

class pluginheadphones : public headphones
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);



    protected:
    int rate;
};
#endif // PLUG-IN HEADPHONES_H
