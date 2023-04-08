#include<iostream>
#include<cstring>
using namespace std;

main(){

    char name[10];
    cin>>name;


    int s = 0, e = strlen(name)-1;

    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }

    cout<<name;



}