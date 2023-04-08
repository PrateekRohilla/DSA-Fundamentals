#include<iostream>
#include<string.h>
using namespace std;
main(){

char str[30];
char temp;

cout<<"Enter the string : ";
cin>>str;

char revstr[30];

int f;
for(f=0;f<strlen(str);f++)
    revstr[f]=str[f];

    revstr[f]='\0';

int i=0,j;
j=strlen(str)-1;

while(i<j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}

int p;
for (p=0;p<strlen(revstr);p++){
    if(revstr[p]!=str[p])
        break;
}
if(p==strlen(str))
    cout<<endl<<"Its a palindrome";
else
    cout<<endl<<"not palindrome..";


/*
if((strcmp(revstr,str))==0)
cout<<endl<<"Its a palindrome";
else
    cout<<endl<<"not palindrome..";
*/

}
