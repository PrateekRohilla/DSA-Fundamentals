//https://leetcode.com/problems/valid-palindrome/
#include<iostream>
#include<string>
using namespace std;

bool validChar(char ch){
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return 1;

    return 0;
}

char toLowercase(char ch){

    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else{
        char t = ch - 'A' + 'a';
        return t;
    }

}

bool checkPalindrome(string str){

    int s = 0;
    int e = str.length()-1;

    while(s<=e){

        if(str[s] != str[e])
            return 0;
        
        s++;
        e--;
    }

    return 1;
}

bool isPalindrome(string s){

    string t = "";

    for(int j=0;j<s.length();j++)
        if(validChar(s[j]))
            t.push_back(s[j]);

    for(int j=0;j<t.length();j++)
        t[j] = toLowercase(t[j]);
        

    return checkPalindrome(t);
}

main(){

    int t = 5;

    while(t--){

        string s;
        getline(cin,s);

        cout<<isPalindrome(s)<<endl;

    }

}