#include<iostream>
using namespace std;

int sumofdigit_rec(int n);

main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<sumofdigit_rec(n);


}

int sumofdigit_rec(int n){
    if(n>=1){
        return n%10+sumofdigit_rec(n/10);
    }
}
