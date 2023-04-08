#include<iostream>
using namespace std;

main(){

    string s;
    getline(cin,s);

    string t = "";

    for(int i=0;i<s.length();i++){

        if(s[i] == ' '){
            t.push_back('@');
            t.push_back('4');
            t.push_back('0');
        }
        else
            t.push_back(s[i]);

    }

    cout<<endl;
    cout<<t<<endl;

}