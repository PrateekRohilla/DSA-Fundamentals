#include<iostream>
using namespace std;
main(){

int a,b;

cout<<"Enter two numbers: ";

cin>>a>>b;

cout<<"\n\nNUmbers before swap: "<<a<<" "<<b;

a=a+b;
b=a-b;
a=a-b;

cout<<"\n\nNUmbers after swap: "<<a<<" "<<b;

}
