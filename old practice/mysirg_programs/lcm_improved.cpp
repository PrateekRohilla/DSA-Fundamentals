#include<iostream>
main(){

using namespace std;

int a,b,i;

cout<<"Enter two numbers: ";
cin>>a>>b;

for(i=(a>b?a:b);i<=a*b;i=i+(a>b?a:b)){
    if(i%a==0 && i%b==0){
        break;
    }
}
cout<<"LCM is "<<i;

}
