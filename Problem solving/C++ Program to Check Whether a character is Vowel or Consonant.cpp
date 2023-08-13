#include <iostream>
using namespace std ;

int main()
{
char c;
int Islowercasevowel,Isuppercasevowel;
cout<<"Enter an alphabet:";
cin>>c;

Islowercasevowel=( c=='a' || c=='e'|| c== 'i' || c=='0' || c=='u');
Isuppercasevowel=( c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U' );

if( Islowercasevowel || Isuppercasevowel )
cout<<"Is a vowel:"<<c;
else
cout<<"is a consonant:"<<c;



return 0;
}
