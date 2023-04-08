//product of first n natural numbers
#include<iostream>
main(){

using namespace std;

int n,i,product=1;

cout<<"Upto how much value you want the product ...Pls Enter: ";
cin>>n;

for(i=1;i<=n;i++){
    product*=i;
}
cout<<"Product is "<<product;
}
