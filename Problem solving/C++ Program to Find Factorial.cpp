#include <iostream>
using namespace std;
int main()
{
int n,i,factorial;
cout<<"Enter a number:"<<endl;
cin>>n;
factorial=n;
for(i=1;i<n;i++)
{
factorial=factorial*i;
}
cout<<"factorial value is :"<<factorial;

return 0;
}
