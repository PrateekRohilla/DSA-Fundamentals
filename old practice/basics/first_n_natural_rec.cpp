#include<iostream>
using namespace std;

void first_natural_rec(int);

main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    first_natural_rec(n);

}

void first_natural_rec(int n){
    if(n>=1)
    {
        first_natural_rec(n-1);
        cout<<endl<<n;
    }

}


