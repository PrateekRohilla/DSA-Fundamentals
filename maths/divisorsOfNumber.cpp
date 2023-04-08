#include<iostream>
#include<math.h>
using namespace std;


main(){

    int n;
    cin>>n;

    cout<<endl<<endl;

    //O(n)
    // for(int i=1;i<=n;i++)
    //     if(n%i == 0)
    //         cout<<i<<" ";

    //O(sqrt(n))
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<i<<" ";

            if(i != n/i)
                cout<<n/i<<" ";
        }   
            
    }

}