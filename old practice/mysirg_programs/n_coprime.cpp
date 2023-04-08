#include<iostream>
main(){

using namespace std;

int n,b,i,a=2;

cout<<"Enter the value of n: ";
cin>>n;

cout<<"\nPair of co-prime numbers are : ";

while(n){
    for(b=2;b<=a;b++){
        int min=a<b?a:b;
        for(i=2;i<min;i++){
            if(a%i==0 && b%i==0){
                break;

            }
            if(i==min){
                cout<<a<<"\t"<<b<<"\n";
                n--;
                if(n==0)
                    break;
            }

        }
    }
    a++;

}
}
