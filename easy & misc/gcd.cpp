#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b){

    if(b == 0)
        return a;

    return gcd(b, a%b);
}

main(){

    cout<<gcd(12,54);
    cout<<endl;
    //inbuilt - STL
    cout<<__gcd(12,54);

}