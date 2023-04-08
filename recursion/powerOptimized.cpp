#include<iostream>
using namespace std;

int power(int a, int b){

    if(b == 0)
        return 1;

    if(b == 1)
        return a;

    int ans = power(a,b/2);

    //b is even
    if(b%2 == 0)
        return ans * ans;

    //b is odd
    else
        return a * ans * ans;

}

main(){

    int a,b;
    cin>>a>>b;

    cout<<power(a,b);

}