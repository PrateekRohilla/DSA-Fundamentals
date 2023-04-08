//check whether a number is prime or not
#include<iostream>
main(){

using namespace std;

int i,n;

cout<<"Enter the number: ";
cin>>n;

for(i=2;i<n;i++){
    if(n%i==0){
        break;
    }
}

if(i==n)
    cout<<endl<<endl<<"This number is prime....";
else
    cout<<endl<<endl<<"This number is not prime....";

}
