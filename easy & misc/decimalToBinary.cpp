#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

main(){

    int n;
    cin>>n;

    string bin;

    while(n){

        if(n&1)
            bin += '1';
        else
            bin += '0';
        
        n = n>>1;
    }
    
    reverse(bin.begin(),bin.end());

    cout<<bin;
}









/*
________________________________

#include<iostream>
using namespace std;

int* revArr(int *arr,int n){
    
    int start = 0;
    int end = n-1;

    while(start < end){

        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;

        start++;
        end--;
    }
}

int* DecimalToBinary(int dec){

    int binary[100];
    int i = 0;
    int n = 0;
    while (dec > 0){
        binary[i] = dec%2;
        dec /= 2;
        i++;
        n++;
    }
    
    int *reversed = revArr(binary,n);
    
    
    return reversed;
}

main(){

        int num;
        cin>>num;

        int binary[32];
        int i = 0;
        int n = 0;

        while (num > 0){
            binary[i] = num%2;
            num /= 2;
            i++;
            n++;
        }

        int start = 0;
        int end = n-1;

        while(start < end){

            int t = binary[start];
            binary[start] = binary[end];
            binary[end] = t;

            start++;
            end--;
        }

        for(int k=0;k<n;k++)
            cout<<binary[k];
        
        cout<<endl<<endl;


}
________________________________

*/