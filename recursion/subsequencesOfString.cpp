#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string>& ans, string str, string output ,int i){

    if(i >= str.length()){
        if(output.length() > 0) //if empty string not required
            ans.push_back(output);
        return;
    }

    //for excluding chars
    solve(ans, str, output, i+1);

    //for including chars
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){

    vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
}

main(){

    string str = "abc";

    vector<string> print = subsequences(str);

    for(int i=0;i<print.size();i++)
        cout<<print[i]<<" ";

}