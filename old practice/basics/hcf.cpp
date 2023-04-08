#include<iostream>
using namespace std;
main(){

int a,b;

cout<<"Enter 2 numbers : ";
cin>>a>>b;

for(int i=(a<b?a:b); i>=1; i--){
    if(a%i==0 && b%i==0){
        cout<<"hcf is "<<i;
        break;
    }

}

}
