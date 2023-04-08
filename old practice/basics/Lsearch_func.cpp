#include<iostream>
using namespace std;

Lsearch(int no,int arr[],int key){
    int i;
    for(i=0;i<no;i++){
        if(arr[i]==key)
        {
            cout<<endl<<"element found at "<<i+1<<" location";
            return 0;
        }
    }
    if(i==no)
    cout<<endl<<"Element not found..";
}



main(){

int n,sear;

cout<<"Enter the number of elements in array : ";
cin>>n;

int a[n];

cout<<endl<<"Enter the elements in array : ";

 for(int i=0;i<n;i++)
    cin>>a[i];

cout<<endl<<"Enter the element you want to search : ";
cin>>sear;

Lsearch(n,a,sear);
}

