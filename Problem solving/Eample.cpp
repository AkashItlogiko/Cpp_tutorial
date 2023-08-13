#include <iostream>
using namespace std;

int addition(int a,int b)
{
int sum = a + b;
return sum;
}
int subtraction (int a, int b)
{
int sub = a - b;
return sub;
}
int multiplication (int a , int b)
{
int mul= a * b;
return mul;
}
float division ( float a ,float b)
{
float div = a / b;
return div;

}
int main()
{
cout << addition (10,5)<<endl;
cout << subtraction (345,25)<<endl;
cout << multiplication (32,53) <<endl;
cout << division(35,4) <<endl;

return 0;
}
