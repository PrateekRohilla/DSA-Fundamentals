#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){

    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    //for excluding elements
    solve(nums, output, index+1, ans);

    //for including elements
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);

}

vector<vector<int>> subsets(vector<int>& nums){

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);

    return ans;
}

main(){

    vector<int> arr = {1,2,3};
    int n = 3;

    vector<vector<int>> print = subsets(arr);


    for(int i=0;i<print.size();i++){
        for(int j=0;j<print[i].size();j++)
            cout<<print[i][j]<<" ";
        cout<<endl;
    }
}