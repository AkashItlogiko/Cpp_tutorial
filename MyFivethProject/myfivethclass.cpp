#include "myfivethclass.h"
#include <iostream>
using namespace std;
void MyFivethClass :: display1 () const
{
  cout<<"I am a constant function"<<endl;
}
void MyFivethClass :: display2 ()
{
  cout<<"I am a non-constant function";
}
