#include<iostream>
#include<algorithm>
using namespace std;

main(){

    int a,b;
    cin>>a>>b;

    for(int i=max(a,b);i<=a*b;i+=max(a,b)){
        if(i%a == 0 && i%b == 0){
            cout<<i<<endl;
            return 0;
        }
    }

}