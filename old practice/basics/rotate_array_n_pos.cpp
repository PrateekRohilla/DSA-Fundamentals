#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the size of array : ";
cin>>n;

int a[n];

cout<<endl<<"Enter the elements in array : ";
for(int i=0;i<n;i++)
    cin>>a[i];

    int dir;
cout<<endl<<"Enter the direction in which you want to rotate the array : "<<endl<<"1.Right"<<endl<<"2.Left";
cout<<endl<<"Enter choice : ";
cin>>dir;

int pos;
cout<<endl<<"How many positions you want to rotate : ";
cin>>pos;

int temp;
for(int k=1;k<=pos;k++){
        if(dir==1)
            temp=a[n-1];
        else
            temp=a[0];
    if(dir==1){
        for(int i=n-1;i>=1;i--)
            a[i]=a[i-1];

    }
    else{
        for(int i=1;i<n;i++)
            a[i-1]=a[i];
    }
        if(dir==1)
            a[0]=temp;
        else
            a[n-1]=temp;
}

cout<<endl<<endl<<"Array after "<<pos<<" position rotations : "<<endl;
for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";

}
