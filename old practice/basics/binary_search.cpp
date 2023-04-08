#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the number of elements you want to enter : ";
cin>>n;

int a[n];
cout<<endl<<"Enter the elements : ";

for(int i=0;i<n;i++)
cin>>a[i];

int key;
cout<<endl<<"Enter the element you want to search : ";
cin>>key;

int l=0,h=n-1,mid;

while(l<=h){
    mid=(l+h)/2;
    if(key==a[mid]){
        cout<<endl<<"found at "<<mid+1;
        return 0;
    }
    else if(key<a[mid])
        h=mid-1;
    else
        l=mid+1;
}

cout<<endl<<"not found";
}
