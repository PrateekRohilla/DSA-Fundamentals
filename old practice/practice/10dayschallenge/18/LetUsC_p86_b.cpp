#include<iostream>
main(){

using namespace std;

int n,factorial=1;

cout<<"Enter the number: ";
cin>>n;

while(n>0){
    factorial=factorial*n;
    n--;
}
cout<<"Factorial is "<<factorial;
}
