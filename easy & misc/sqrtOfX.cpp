#include<iostream>
using namespace std;

int sqrtOfX(int n){

    if(n == 0 || n == 1)
        return n;

    int i=1;

    while(i*i <= n)
        i++;

    return i-1;
}

main(){

    int t = 5;

    while(t--){

        int n;
        cin>>n;

        cout<<sqrtOfX(n);

        cout<<endl<<endl;
    }


}