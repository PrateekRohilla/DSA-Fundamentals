#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the value of n : ";
cin>>n;


int till=1;
while(till<=n){
        int d=0;
    for(int i=1;i<=till;i++)
        d+=i;

        cout<<d;
        if(till<n)
            cout<<" + ";
        till++;
}



}
