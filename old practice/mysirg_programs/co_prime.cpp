#include<iostream>
main(){

using namespace std;

int a,b,i;

cout<<"Enter two numbers: ";
cin>>a>>b;

for(i=a<b?a:b; i>1; i--){
    if(a%i==0 && b%i==0)
        break;
}

if(i==1)
    cout<<"Numbers are co-prime";
else
    cout<<"Numbers are not co-prime";

}
