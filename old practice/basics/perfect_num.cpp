#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the number : ";
cin>>n;

{
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        cout<<endl<<"perfect number....";
    else
        cout<<endl<<"not a perfect number";
}

}
