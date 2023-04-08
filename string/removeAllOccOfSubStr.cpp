#include<iostream>
using namespace std;

main(){

    string s,part;
    
    cout<<"string : ";
    cin>>s;
    cout<<"Substr : ";
    cin>>part;

    while(s.length() != 0 && s.find(part) < s.length())
        s.erase(s.find(part), part.length());
    
    cout<<endl<<s;

}