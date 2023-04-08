#include<iostream>
main(){

using namespace std;

int a,b,c;

cout<<"Enter three numbers a, b & c respectively: ";
cin>>a>>b>>c;

a>b?(a>c?cout<<"A is greater":cout<<"C is greater"):(b>c?cout<<"B is greater":cout<<"C is greater");
}
