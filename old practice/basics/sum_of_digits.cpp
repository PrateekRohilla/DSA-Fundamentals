#include<iostream>
using namespace std;
main(){

int n,sum=0;

cout<<"Enter the number : ";
cin>>n;

while(n>0){
    int rem=n%10;
    sum+=rem;
    n=n/10;
}

cout<<endl<<"sum is "<<sum;
}
