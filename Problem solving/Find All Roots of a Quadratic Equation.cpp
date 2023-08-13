#include <iostream>
using namespace std ;

int main()
{
float a,b,c,x1,x2,discriminant,realpart,imaginarypart;
cout<<"Enter cofficients a,b and c :";
Cin>> a >> b >> c ;

discriminant= b*b-4*a*c;

if (discriminant >0 )
{
x1 =(-b +sqrt(discriminant))/(2*a);
x2 =(-b-sqrt(discriminant))/(2*a);
cout<<"x1 = "<<x1


}







return 0;
}
