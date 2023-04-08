#include<iostream>
using namespace std;

void tailRecursion(int n){
    if(n == 0)
        return;

    cout<<n<<" ";

    tailRecursion(n-1);
}

void headRecursion(int n){
    if(n == 0)
        return;

    headRecursion(n-1);

    cout<<n<<" ";
}

main(){

    int n;
    cin>>n;

    cout<<"head recursion : ";
    headRecursion(n);

    cout<<endl<<endl;

    cout<<"tail recursion : ";
    tailRecursion(n);


}