#include<iostream>
#include<algorithm>
using namespace std;

main(){

    int a,b;
    cin>>a>>b;

    for(int i=min(a,b);i>0;i--){
        if(a%i == 0 && b%i == 0){
            cout<<i<<endl;
            return 0;
        }
    }

}