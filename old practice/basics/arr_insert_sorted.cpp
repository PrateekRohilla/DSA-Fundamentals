#include<iostream>
using namespace std;
main(){

int a[10]={1,2,3,4,5,7,8,9,10,12};
int elem,pos;

cout<<"Array : "<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";

cout<<endl<<endl<<"Enter the element to insert : ";
cin>>elem;

for(int i=0;i<10;i++){
    if(a[i]>elem)
     {
         pos=i;
         break;
     }

}
for(int i=10;i>pos;i--){
    a[i]=a[i-1];
}

a[pos]=elem;

cout<<"Array after insertion : "<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";
}
