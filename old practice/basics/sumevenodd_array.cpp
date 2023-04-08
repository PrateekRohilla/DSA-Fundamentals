#include<iostream>
using namespace std;
main(){

int n;
int sumeven=0;
int sumodd=0;


cout<<"Enter the number of even elements : ";
cin>>n;
int even[n];
cout<<"Enter the even elements : ";
for(int i=0;i<n;i++){
    cin>>even[i];
    sumeven+=even[i];
}

cout<<"Enter the number of odd elements : ";
cin>>n;
int odd[n];
cout<<"Enter the odd elements : ";
for(int i=0;i<n;i++){
    cin>>odd[i];
    sumodd+=odd[i];
}

cout<<endl<<endl<<"Sum of even elements : "<<sumeven;
cout<<endl<<endl<<"Sum of odd elements : "<<sumodd;
}
