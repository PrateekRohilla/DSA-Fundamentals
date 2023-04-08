#include<iostream>
main(){

using namespace std;

int n,i,j;

cout<<"Enter the order for star pattern: ";
cin>>n;

for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
        cout<<"*";
    cout<<endl;
}
}
