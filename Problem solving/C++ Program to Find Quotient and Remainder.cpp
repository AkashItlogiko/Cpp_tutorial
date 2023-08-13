#include <iostream>
using namespace std;

int main()
{
int dividend,divisor,quotient,remainder;

cout<<"Enter dividend:";
cin>>dividend;

cout<<"Enter divisor:";
cin>>divisor;

quotient=dividend/divisor; //ruels=(dividend-remainder)/divisor
remainder=dividend%divisor;//ruels=dividend-(divisor*quotient)

cout<<"quotient :"<<quotient;
cout<<"remainder:"<<remainder;



return 0;
}
