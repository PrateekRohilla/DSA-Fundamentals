#include<iostream>
using namespace std;
main(){

int n,i;

cout<<"Enter the number : ";
cin>>n;

for(i=2;i<n;i++){
    if(n%i==0){
        cout<<endl<<"number is not prime..";
        break;
    }
}
if(i==n){
    cout<<endl<<"number is prime..";
}
}
