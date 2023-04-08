#include<iostream>
using namespace std;
main(){

int a[10]={1,2,3,4,5};

cout<<"Array : "<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";

int pos,element;

cout<<endl;
cout<<endl<<"Enter the position at which you want to insert the element : ";
cin>>pos;

cout<<endl<<endl;

if(pos>10)
    {
        cout<<endl<<"out of range..";
        return 0;
    }



for(int i=10;i>pos;i--)
        a[i]=a[i-1];

cout<<endl<<"Enter the element : ";
cin>>element;

a[pos]=element;

cout<<endl<<"Array after insertion : "<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";

}
