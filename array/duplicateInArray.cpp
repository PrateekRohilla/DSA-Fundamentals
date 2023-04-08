#include<iostream>
using namespace std;

main(){

    int arr[] = {1,2,3,4,3,5,6};
    int n = 7;

    int ans = 0;

    //XOR ing all arr elements
    for(int i=0;i<n;i++)
        ans = ans ^ arr[i];

    //XOR ing 1 to n-1
    for(int i=1;i<n;i++)
        ans = ans ^ i;

    cout<<ans<<endl;

}