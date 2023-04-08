//check whether a number is armstrong or not
#include<iostream>
#include<cmath>
main(){

using namespace std;

int n,counter=0,extran,originalnumber,sum=0,rem;

cout<<"Enter the number: ";
cin>>n;

extran=originalnumber=n;

while(n>0){
    n=n/10;
    counter++;
}

while(extran>0){
    rem=extran%10;
    cout<<endl<<rem;
    sum+=pow(rem,counter);
    cout<<endl<<sum;
    extran=extran/10;
    cout<<endl<<extran;
}

if(sum==originalnumber)
    cout<<"Hola!! ...  this is a armstrong number";
else
    cout<<"Its not a armstrong number";
    cout<<endl<<sum<<endl<<originalnumber;

}
