#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){

        int curr = arr[i];

        while(s.top() >= curr)
            s.pop();
        
        //now stack top is having smaller element
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}

main(){

    vector<int> arr = {2, 1, 4, 3};
    int n = arr.size();

    vector<int> ans = nextSmallerElement(arr, n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}