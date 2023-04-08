#include<iostream>
using namespace std;

int sum_rec(int);

main(){

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<endl<<sum_rec(n);
}

int sum_rec(int n){
    if(n==1)
        return 1;
    return n+sum_rec(n-1);
}
