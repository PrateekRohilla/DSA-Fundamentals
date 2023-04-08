#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the number of elements : ";
cin>>n;

int even[]={0};
int odd[]={0};

for(int i=0;i<n;i++){
        int num;
        cin>>num;
    if(num%2==0)
        even[0]+=num;
    else
        odd[0]+=num;

}
cout<<endl<<"Sum of even numbers : "<<even[0];
cout<<endl<<"Sum of odd numbers : "<<odd[0];
}
