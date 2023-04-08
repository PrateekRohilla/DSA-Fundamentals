#include<iostream>
main(){

using namespace std;

int n,rev=0;

cout<<"Enter a five digit number: ";
cin>>n;

int rem=n%10;
rev+=rem*10000;
n=n/10;
rem=n%10;
rev+=rem*1000;
n=n/10;
rem=n%10;
rev+=rem*100;
n=n/10;
rem=n%10;
rev+=rem*10;
n=n/10;
rev+=n;

cout<<"Reverse of number is "<<rev;
}
