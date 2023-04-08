#include<iostream>
using namespace std;
main(){

int n,search;


cout<<"Enter the number of elements : ";
cin>>n;

int a[n];

cout<<endl<<"Enter the elements : ";
for(int i=0;i<n;i++)
    cin>>a[i];

cout<<endl<<"Enter the element you want to search : ";
cin>>search;
int j;
for(j=0;j<n;j++){
    if(a[j]==search)
        break;
}
if(j==n)
    cout<<endl<<"Element not found..!!";
else
    cout<<endl<<"Element found at position "<<j+1;

}
