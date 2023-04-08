#include<iostream>
using namespace std;
main(){
int n;
cout<<"Enter the number of elements in array : ";
cin>>n;

int a[n];

cout<<"Enter the elements in array : ";
for(int i=0;i<n;i++)
    cin>>a[i];

int largest=a[0];
for(int j=0;j<n;j++){
    if(largest<a[j])
        largest=a[j];
}
cout<<endl<<"largest is : "<<largest;
}
