#include<iostream>
using namespace std;

int solution(int a[], int n)
{
    
    int pro = 1;
    
    for(int i=0;i<n;i++)
        pro *= a[i];
    
    if(pro > 0)
        return 1;
    if(pro < 0)
        return -1;

    return 0;
}


main(){
    
    int a[100];
    int n = 5;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    cout<<endl<<solution(a,n);
    
}
