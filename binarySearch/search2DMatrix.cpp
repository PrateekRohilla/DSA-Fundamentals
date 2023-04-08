//https://leetcode.com/problems/search-a-2d-matrix/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;

    int row = 3;
    int col = 4;

    int start = 0;
    int end = row*col-1;

    int mid = start + (end-start)/2;

    while(start <= end){

        int element = matrix[mid/col][mid%col];

        if(element == target){
            cout<<"found";
            return 1;
        }
        
        if(element < target)
            start = mid+1;
        else
            end = mid-1;
        
        mid = start + (end-start)/2;
    }

    cout<<"not found";
    return 0;

}