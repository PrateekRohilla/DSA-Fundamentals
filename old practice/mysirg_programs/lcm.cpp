//lcm
#include<iostream>
main(){

using namespace std;

int a,b,i;

cout<<"Enter two numbers: ";
cin>>a>>b;

for(i=2;i<a*b;i++){
    if(a%i==0 && b%i==0){
            break;
    }
}

cout<<"LCM is "<<i;

}
