#ifndef PLUG-IN HEADPHONES_H
#define PLUG-IN HEADPHONES_H
#include"headphones.h"

class pluginheadphones : public headphones
{  public:
        virtual void vibor();
        int GetRate();
        void SetRate(int enRate);
         pluginheadphones(int rate);


    protected:
    int rate;
};
#endif // PLUG-IN HEADPHONES_H
