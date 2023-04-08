#include<iostream>
main(){

using namespace std;

char check;

cout<<"Enter the character: ";
cin>>check;

if(check>=65 && check<=90)
    cout<<"Entered character is a capital alphabet";
else if(check>=97 && check<=122)
    cout<<"Entered character is a small alphabet";
else if(check>=48 && check<=57)
    cout<<"Entered character is a number";
else if((check>=0 && check<=47)||(check>=58 && check<=64)||(check>=91 && check<=96)||(check>=123 && check<=127))
    cout<<"Entered character is a Special character";
else
    cout<<"Invalid character";
}
