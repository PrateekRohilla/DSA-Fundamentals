#include<iostream>
#include<cmath>
using namespace std;

main(){

    int n;
    cin>>n;

    int i = 0, dec = 0;

    while(n){
        int digit = n%10;
        if(digit)
            dec += pow(2,i);
        
        n /= 10;
        i++;
    }

    cout<<dec;
}