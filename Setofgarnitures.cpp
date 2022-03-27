#include "Setofgarnitures.h"
#include <iostream>

Setofgarnitures::Setofgarnitures()
{
  countofgarnitures = 0;
  Set = nullptr;
}

Setofgarnitures::~Setofgarnitures()
{
  if (Set != nullptr)
    delete[] Set;
}

void Setofgarnitures::Print()
{
  for (int q = 0; q < countofgarnitures; q++)
  {
      Set[q]->vibor();
  }
}

void Setofgarnitures::Addgarnitures(garnitura* grnt)
{
  if (countofgarnitures == 0)
  {
      Set = new garnitura * [1];
      countofgarnitures = 1;
      Set[0] = grnt;
  }
  else
  {
      garnitura** temporary = new garnitura * [countofgarnitures + 1];

      for (int q = 0; q < countofgarnitures; q++)
      {
          temporary[q] = Set[q];
      }

      delete Set;
      Set = temporary;
      Set[countofgarnitures] = grnt;
      countofgarnitures++;
  }
}
