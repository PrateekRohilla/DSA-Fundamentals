#include<iostream>
#include<cstring>
using namespace std;

//remove case sensitive
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char t = ch - 'A' + 'a';
        return t;
    }
}

bool palindrome(char temp[]){

    int s = 0;
    int e = strlen(temp) - 1;

    while(s<=e){
        char first = toLowerCase(temp[s]);
        char last = toLowerCase(temp[e]);

        if(first != last)
            return false;
        
        s++;
        e--;
    }
    
    return true;
}

main(){

    int t = 5;
    while(t--){
        char pal[10];
        cin>>pal;
    
        cout<<palindrome(pal)<<endl;
    }
    
}