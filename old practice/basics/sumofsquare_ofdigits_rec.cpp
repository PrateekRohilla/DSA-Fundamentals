#include<iostream>
using namespace std;

int sqofdigits_rec(int);

main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl<<"sum of square of digit is : "<<sqofdigits_rec(n);
}

int sqofdigits_rec(int n){

    if(n>=1){
        return ((n%10)*(n%10)+sqofdigits_rec(n/10));
    }


}
