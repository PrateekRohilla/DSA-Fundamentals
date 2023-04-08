#include<iostream>
using namespace std;

main(){

    char ch = 0;

    for(int i=0;i<256;i++){

        cout<<ch<<" ";
        ch = i;
    }

    cout<<endl<<endl;

    for(int i=65;i<=91;i++){
        cout<<ch<<" ";
        ch = i;
    }

    cout<<endl<<endl;

    for(int i=48;i<=57;i++){
        ch = i;
        cout<<ch<<" ";
        
    }

    cout<<endl<<endl;

    for(int i=97;i<=122;i++){
        ch = i;
        cout<<ch<<" ";
        
    }

}