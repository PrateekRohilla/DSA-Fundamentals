#include<iostream>
using namespace std;

main(){

    int n;
    cin>>n;

    int a = 0, b = 1, c;

    cout<<a<<" "<<b<<" ";

    for(int i=3;i<=n;i++){

        c = a + b;
        cout<<c<<" ";

        a = b;
        b = c;
    }


}