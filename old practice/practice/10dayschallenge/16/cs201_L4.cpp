#include<iostream>
main(){

using namespace std;

int n,a,b,c,d;

cout<<"Enter a four digit number: ";
cin>>n;

d=n%10;
n=n/10;

c=n%10;
n=n/10;

b=n%10;
n=n/10;

a=n%10;
n=n/10;

cout<<"Separated digits are "<<endl
    <<a<<endl
    <<b<<endl
    <<c<<endl
    <<d<<endl;
}
