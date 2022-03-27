#ifndef SETOFGARNITURES_H
#define SETOFGARNITURES_H
#pragma once
#include "garnitura.h"

class Setofgarnitures
{
public:
  Setofgarnitures();
  ~Setofgarnitures();
  void Print();
  void Addgarnitures(garnitura* grnt);
private:
  garnitura** Set;
  short countofgarnitures;
};

#endif // SETOFGARNITURES_H
