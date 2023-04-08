//input a 5 digit number & calculate sum of its digit
#include<iostream>
main(){

using namespace std;

int n,sum=0;

cout<<"Enter a five digit number: ";
cin>>n;

int rem=n%10;
sum+=rem;
n=n/10;
rem=n%10;
sum+=rem;
n=n/10;
rem=n%10;
sum+=rem;
n=n/10;
rem=n%10;
sum+=rem;
n=n/10;
sum+=n;

cout<<"sum is "<<sum;
}
