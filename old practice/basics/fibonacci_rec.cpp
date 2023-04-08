#include<iostream>
using namespace std;

int fibo(int);

main(){

int n;

cout<<"Enter the number : ";
cin>>n;
//int res=fibo(n);
//cout<<endl<<res;

for(int i=1;i<=n;i++)
    cout<<fibo(i)<<"\t";
}

int fibo(int n){
    if(n==1 || n==2)
        return 1;

    return fibo(n-1)+fibo(n-2);

}
