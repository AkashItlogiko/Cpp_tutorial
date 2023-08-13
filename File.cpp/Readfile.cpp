#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  string line;

  ifstream file("Details.text");

  while(getline(file,line))
  {
   cout<< line <<endl;
  }
   file.close();
}
