#include<iostream>
using namespace std;

bool palindrome(string str, int i, int j){

    if(i > j)
        return true;
    
    if(str[i] != str[j])
        return false;

    return palindrome(str,i+1,j-1);
}

main(){

    string str = "noon";
    
    int j = str.length()-1;

    cout<<palindrome(str, 0, j);
}