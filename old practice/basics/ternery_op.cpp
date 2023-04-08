//find largest  of three numbers
#include<iostream>
using namespace std;
main(){

int a,b,c;

cout<<"enter three numbers :";

cin>>a>>b>>c;

cout<<endl;

a>b?(a>c?cout<<"a is largest":cout<<"c is largest"):(b>c?cout<<"b is largest":cout<<"c is largest");

}
