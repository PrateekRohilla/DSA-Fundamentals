//first n odd natural numbers in reverse order
#include<iostream>
using namespace std;
main(){

int n;

cout<<"Enter the value of n: ";
cin>>n;

for(int i=n*2;i>=1;i--){
    if(i%2 !=0){
        cout<<i<<endl;
    }
}

}
