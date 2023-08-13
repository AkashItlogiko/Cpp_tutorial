#include<iostream>
using namespace std;

int main()
{
 int n;
 float sum;
 cout <<"Enter number of students :" ;
 cin >>n;

float students [n];

for (int i=0;i<n;i++)

{
 cin >> students[i];
 sum = sum + students [i];
}
 cout <<"Total marks :"<<sum <<endl;
 float avg = sum / n ;
 cout <<"Average : " <<avg;


return 0;
}
