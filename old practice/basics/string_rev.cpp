#include<iostream>
#include<string.h>
using namespace std;
main(){

char str[100];

cout<<"Enter the string  : ";
cin>>str;

int j,i=0;
char temp;

j=strlen(str)-1;


while(i<j)
{

    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}

cout<<endl<<str;
}
