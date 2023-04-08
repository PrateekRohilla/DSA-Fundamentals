//smallest number of notes that will combine to give the amount
#include<iostream>
main(){

using namespace std;

int n,count=0;

cout<<"Enter the amount: ";
cin>>n;

count+=n/100;
n=n%100;
count+=n/50;
n=n%50;
count+=n/10;
n=n%10;
count+=n/5;
n=n%5;
count+=n/2;
n=n%2;
count+=n/1;
//n=n%1;

cout<<"No. of notes are "<<count;
}
