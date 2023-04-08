#include<iostream>
using namespace std;

main(){

    int arr[3][3] = {2,3,4,5,6,7,8,9,10};
    int row = 3, col = 3;

    for(int i=0;i<3;i++){
        
        if(i&1)
            for(int j=2;j>=0;j--)
                cout<<arr[j][i]<<" ";
        
        else    
            for(int j=0;j<3;j++)
                cout<<arr[j][i]<<" ";
    }

}