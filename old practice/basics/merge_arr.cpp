#include<iostream>
using namespace std;
#define max 5
main(){

int a[max];
int b[max];
int c[2*max];

cout<<"Array a: ";
for(int i=0;i<max;i++)
    cin>>a[i];

cout<<endl<<endl;

cout<<"Array b: ";
for(int i=0;i<max;i++)
    cin>>b[i];


cout<<endl<<endl;

int i,j,k;

i=j=k=0;

while(i<max && j<max){

    if(a[i]<b[j])
    {
        c[k]=a[i];
        i++;
    }
    else
    {
        c[k]=b[j];
        j++;
    }
    k++;

}
if(i<max)
{
    while(i!=max){
        c[k]=a[i];
        i++;
        k++;
    }
}
if(j<max)
{
    while(j!=max){
        c[k]=b[j];
        j++;
        k++;
    }
}


cout<<endl<<endl;

cout<<"Array c: ";
for(int i=0;i<2*max;i++)
    cout<<c[i]<<"\t";


}
