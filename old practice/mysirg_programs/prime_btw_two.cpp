//prime between two given numbers
#include<iostream>
main(){

using namespace std;

int a,b,i,n;

cout<<"Enter two number a and b respectively: ";
cin>>a>>b;

cout<<endl<<"Prime numbers between "<<a<<" and "<<b<<" are :"<<endl<<endl;

int index=a;

while(index<=b){
        n=index;
for(i=2;i<n;i++){
    if(n%i==0)
        break;
}

if(i==n)
    cout<<n<<endl;

index++;
}

}
