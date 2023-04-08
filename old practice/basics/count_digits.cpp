#include<iostream>
using namespace std;
main(){

int n,count=0;

cout<<"Enter the number : ";
cin>>n;

while(n>0){
    n=n/10;
    count++;
}

cout<<"there are "<<count<<" digits in the number";
}
