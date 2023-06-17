#include<iostream>
#include<cmath>
using namespace std;

main(){

    long long int n = 1011100010101010;
    
    int res = 0, power = 0;

    while(n){
        
        int digit = n%10;

        if(digit)
            res += pow(2,power);
        
        power++;

        n /= 10;
    }

    cout<<res;
}