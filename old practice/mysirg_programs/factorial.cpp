//factorial
#include<iostream>
main(){

using namespace std;

int n,i,fact=1;

cout<<"Enter the number to calculate factorial: ";
cin>>n;

for(i=n;i>=1;i--){
    fact*=n;
    n--;
}
cout<<"Factorial is "<<fact;
}
