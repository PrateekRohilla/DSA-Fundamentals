#include<iostream>
main(){

using namespace std;

int a,b;

cout<<"Enter the numbers to swap: ";
cin>>a>>b;

a=a+b;
b=a-b;
a=a-b;

cout<<"After swapping values are: "<<a<<"\t"<<b;
}
