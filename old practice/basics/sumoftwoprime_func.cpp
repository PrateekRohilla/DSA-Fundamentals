#include<iostream>
using namespace std;

int checkprime(int);

main(){

int n,n1,n2;

cout<<"Enter the number : ";
cin>>n;
cout<<endl<<endl;


for(int i=2;i<=(n/2);i++)
{

    if(checkprime(i)){
        n1=n-i;
    if(checkprime(n1)){
        cout<<i<<" + "<<n1;
        cout<<endl;
    }
}
}
cout<<endl<<endl;
}

int checkprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
