#include<iostream>
using namespace std;
main(){

int a,b,i,j;

cout<<"Enter the value of a & b : ";
cin>>a>>b;
cout<<endl<<"prime between "<<a<<" & "<<b<<" :"<<endl;

for(i=a;i<=b;i++){
    for(j=2;j<i;j++){
        if(i%j==0)
            break;
    }
    if(i==j){
        cout<<i<<endl;
    }
}

}
