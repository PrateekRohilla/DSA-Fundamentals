#include<iostream>
using namespace std;

main(){

    char name[10];
    cin>>name;

    int len = 0;

    int i=0;
    while(name[i] != '\0'){
        len++;
        i++;
    }

    cout<<len;



}