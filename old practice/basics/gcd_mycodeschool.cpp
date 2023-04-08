#include<iostream>
using namespace std;
main(){

int a,b;
int dividend,divisor,remainder;

cout<<"Enter two numbers : ";
cin>>a>>b;
dividend=a>=b?a:b;
divisor=a<=b?a:b;
while(divisor!=0){
    remainder=dividend%divisor;
    dividend=divisor;
    divisor=remainder;
    }
cout<<endl<<"GCD is : "<<dividend;
}
