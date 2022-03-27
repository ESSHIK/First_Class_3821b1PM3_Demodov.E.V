#include "garnitura.h"
#include<iostream>

using namespace std;


int garnitura::GetPrice()
{
    return price;
}

void garnitura::SetPrice(int enPrice)
{
    if(enPrice > 0)
    {
        price == enPrice;
    }
}

garnitura::garnitura(int price)
{
    this->price = price;
}

void garnitura::vibor()
{
    cout<<" your choice garnitura"<<endl;
}
