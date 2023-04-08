#include<iostream>
using namespace std;

int fact(int);

main(){

int n;
cout<<"Enter the number : ";
cin>>n;
int res=fact(n);
cout<<endl<<endl<<"Factorial of "<<n<<" is "<<res<<endl<<endl;
}

int fact(int n){

if(n==1)
    return 1;
return n*fact(n-1);

}
