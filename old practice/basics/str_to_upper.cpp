#include<iostream>
#include<ctype.h>
using namespace std;
main(){

char str[100];

cout<<"Enter string : ";
cin>>str;

int i=0;
while(str[i]!='\0')
{
    str[i]=str[i]-32;
    i++;
}
cout<<"upper : "<<str;

}
