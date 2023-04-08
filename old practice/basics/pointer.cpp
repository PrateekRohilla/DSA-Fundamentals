#include<iostream>
using namespace std;
main(){

    int *p;

    p=new int [5];

    for(int i=0;i<5;i++)
        p[i]=i;

    for(int i=0;i<5;i++)
        cout<<p[i]<<"  ";

    cout<<endl<<endl<<p;

    delete []p;


    cout<<endl<<endl<<p;

    p=nullptr;

    cout<<endl<<endl<<p;
}
