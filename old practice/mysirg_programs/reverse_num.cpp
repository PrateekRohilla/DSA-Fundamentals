#include<iostream>
main(){

using namespace std;

int i,n,rev=0,rem;

cout<<"Enter the number: ";
cin>>n;

while(n!=0){
    rem=n%10;
    rev+=rem;
    n=n/10;
    if(n!=0)
        rev*=10;

}

cout<<"Reverse is "<<rev;

}
