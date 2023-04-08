#include<iostream>
using namespace std;
main(){

int n[10];

cout<<"Enter 10 elements : ";

for(int i=0;i<10;i++)
    cin>>n[i];

int greatest=n[0];

for(int i=0;i<10;i++)
{
    if(n[i]>greatest)
        greatest=n[i];
}

cout<<endl<<"greatest is "<<greatest;

}
