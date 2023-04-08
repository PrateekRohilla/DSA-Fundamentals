//https://leetcode.com/problems/reverse-integer/
#include<iostream>
#include<limits.h>
using namespace std;

int reverse(int x) {
    
    long long int result = 0;

    while(x != 0){
        int digit = x%10;
        result = (result * 10) + digit;
        x /= 10;
    }

    if(result > INT_MAX || result < INT_MIN)
         result = 0;

    return result;
}

main(){

    int n;
    cin>>n;
    
    cout<<reverse(n);
}