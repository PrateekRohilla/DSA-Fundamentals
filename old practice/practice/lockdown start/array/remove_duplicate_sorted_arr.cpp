#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(int A[],int N)
{
    if(N == 0 || N == 1)
        return N;
    
    int j = 0;
    
    for(int i=0;i<N-1;i++)
    {
        if(A[i] != A[i+1])
            A[j++] = A[i];
    }
    
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously
    A[j] = A[N-1];
    
    //j+1 is now the original size of array (after removing duplicates)
    return j+1;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
