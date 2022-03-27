#include<iostream>
#include"in-ear headphones.h"
#include"plug-in headphones.h"
#include"overhead headphones.h"
#include"mouse.h"
#include"touchpad.h"
#include"mechanical mouse.h"
#include"optical mouse.h"
#include"garnitura.h"
#include"headphones.h"
#include"Setofgarnitures.h"
#include"full-size headphones.h"
using namespace std;

int main()
{
  mouse Bloody(8,4000);
  headphones Razer(10, 33000);

  Setofgarnitures set;

  set.Addgarnitures(&Bloody);
  set.Addgarnitures(&Razer);
  set.Print();
  return 0;
}
