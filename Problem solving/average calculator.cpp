#include <iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter number of students:";
cin>>n;

int students [n];
for (int i=0;i<n;i++)
{
 cin>> students[i];
 sum = sum + students[i];
}
cout <<"Total marks :"<<sum<<endl;
float avg =(float)sum/n;
cout<<"Average :"<<avg<<endl;



return 0;
}
