#include<iostream>
using namespace std;
main(){

int n,a=-1,b=1,c;

cout<<"Enter the value of n : ";
cin>>n;

for(int i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<"\t";
}

}
