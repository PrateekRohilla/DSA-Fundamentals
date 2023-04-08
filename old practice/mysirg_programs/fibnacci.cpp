#include<iostream>
main(){

using namespace std;

int n;
int a=0,b=0,c=1;

cout<<"Enter the no of terms for fibonacci series: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<c<<"\t";
    a=b;
    b=c;
    c=a+b;
}

}
