#include<iostream>
using namespace std;
main(){

int n,rev=0;

cout<<"Enter the number : ";

cin>>n;

while(n>0){
    int rem=n%10;
    rev+=rem;
    n=n/10;
    if(n!=0){
        rev*=10;
    }
}
cout<<endl<<"reverse is "<<rev;
}
