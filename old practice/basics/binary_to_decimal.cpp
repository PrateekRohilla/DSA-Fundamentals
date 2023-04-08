#include<iostream>
#include<cmath>
using namespace std;
main(){

int bin,add=0,power=0,digit;

cout<<"Enter the number in binary : ";
cin>>bin;

while(bin>0){
    digit=bin%10;
    add+=digit*(pow(2,power));
    bin=bin/10;
    power++;
}
cout<<endl<<"Decimal equivalent is : "<<add;
}
