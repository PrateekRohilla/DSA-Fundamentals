#include<iostream>
using namespace std;
main(){

int a[10]={1,2,3,4,5,7,8,9,10,12};
int elem,pos=-1;

cout<<"Array : "<<endl<<endl;
for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";

cout<<endl<<endl<<"Enter the element to delete : ";
cin>>elem;

for(int i=0;i<10;i++){
    if(a[i]==elem){
        pos=i;
        break;
    }

}
if(pos==-1)
{
    cout<<endl<<endl<<"element not found";
    return 0;
}

for(int i=pos;i<10;i++){
    a[i]=a[i+1];
}


cout<<"Array after deletion : "<<endl<<endl;
for(int i=0;i<9;i++)
    cout<<a[i]<<"  ";
}
