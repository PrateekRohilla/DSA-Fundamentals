#include<iostream>
using namespace std;
main(){

int a,b;
cout<<"Enter the value of a & b: ";
cin>>a>>b;

while(a!=b){
    if(a>b)
        a=a-b;
    else
        b=b-a;
}
cout<<"GCD is : "<<a;
}
