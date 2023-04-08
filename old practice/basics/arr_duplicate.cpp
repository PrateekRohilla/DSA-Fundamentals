#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the size of array : ";
cin>>n;

int a[n];

cout<<endl<<"Enter the array : ";

for(int i=0;i<n;i++)
    cin>>a[i];

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j])
        {
            cout<<endl<<"found duplicate at : ";
            cout<<i<<" & "<<j;

        }
    }
}


}
