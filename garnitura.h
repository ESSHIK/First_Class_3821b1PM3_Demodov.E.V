#ifndef GARNITURA_H
#define GARNITURA_H
#pragma once

using namespace  std;

class garnitura
{
    public:
        virtual void vibor();
        int GetPrice();
        void SetPrice(int enPrice);
        garnitura(int price);


    protected:
    int price;

};

#endif // GARNITURA_H
