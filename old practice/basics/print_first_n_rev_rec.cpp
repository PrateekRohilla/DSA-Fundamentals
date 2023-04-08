#include<iostream>
using namespace std;

void firstn_rev_rec(int);

main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    firstn_rev_rec(n);

}

void firstn_rev_rec(int n){
    if(n>=1){
        cout<<endl<<n;
        firstn_rev_rec(n-1);
    }

}
