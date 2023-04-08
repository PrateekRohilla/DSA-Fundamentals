#include<iostream>
using namespace std;
main(){

int a,b;

cout<<"Enter two numbers : ";
cin>>a>>b;

for(int i=(a>b?a:b); i<=a*b; i++){
    if(i%a==0 && i%b==0){
        cout<<"lcm is "<<i;
        break;
    }

}

}
