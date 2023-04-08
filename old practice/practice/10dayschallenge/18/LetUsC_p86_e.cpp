//armstrong 1 to 500
#include<iostream>
#include<cmath>
main(){

using namespace std;

int n=1,counter=0,extran,originalnumber,sum=0,rem,print=1;

//cout<<"Enter the number: ";
//cin>>n;

cout<<"Armstrong 1 to 500 are:  "<<endl;

while(print<501)
    n=print;
extran=originalnumber=n;

while(n>0){
    n=n/10;
    counter++;
}

while(extran>0){
    rem=extran%10;
  //  cout<<endl<<rem;
    sum+=pow(rem,counter);
  //  cout<<endl<<sum;
    extran=extran/10;
  //  cout<<endl<<extran;
}

if(sum==originalnumber)
    cout<<sum;
 //   cout<<"Hola!! ...  this is a armstrong number";
//else
//    cout<<"Its not a armstrong number";
//    cout<<endl<<sum<<endl<<originalnumber;
    print++;

}
