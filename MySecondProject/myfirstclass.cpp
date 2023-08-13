#include "myfirstclass.h"
#include <iostream>
using namespace std;

MyFirstClass:: MyFirstClass()
{
 cout <<"Constructor is called"<<endl;
}
MyFirstClass ::~MyFirstClass()
{
 cout <<"Destructor is called"<<endl;

}
void MyFirstClass ::display()
{
  cout <<"display is called"<<endl;
}
