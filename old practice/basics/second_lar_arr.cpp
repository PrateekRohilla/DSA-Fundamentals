#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the size of array: ";
cin>>n;

int a[n];
int larpos=0;

cout<<"Enter array elements : ";
for(int i=0;i<n;i++)
    cin>>a[i];

int largest=a[0];
int seclar=a[0];

for(int i=0;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
        larpos=i;
    }
}
for(int i=0;i<n;i++){
    if(a[i]>seclar && i!=larpos){
        seclar=a[i];
    }

}
cout<<endl<<"second largest is : "<<seclar;
}
