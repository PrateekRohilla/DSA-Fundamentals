#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the size of array: ";
cin>>n;

int a[n];
int larpos;
int smallpos=0;

cout<<"Enter array elements : ";
for(int i=0;i<n;i++)
    cin>>a[i];

int largest=a[0],smallest=a[0];

for(int i=0;i<n;i++){
    if(a[i]>largest)
    {
        largest=a[i];
        larpos=i;
    }
}

for(int i=0;i<n;i++){
    if(a[i]<smallest)
    {
        smallest=a[i];
        smallpos=i;
    }
}
cout<<endl<<"smallest position : "<<smallpos<<endl;
cout<<endl<<"largest position : "<<larpos<<endl;

a[smallpos]=largest;
a[larpos]=smallest;

cout<<endl<<endl<<"after interchange : ";

for(int i=0;i<n;i++)
  cout<<a[i]<<"\t";

}
