//minimum cost to make string valid
#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string s){

    //odd condition
    if(s.length()%2 == 1)
        return -1;

    stack<char> st;

    for(int i=0;i<s.length();i++){

        char ch = s[i];

        if(ch == '{')
            st.push(ch);
        else{

            //ch is closed brace

            if(!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);

        }

    }

    // now stack contains invalid expression

    int a = 0; //count of close braces
    int b = 0; //count of open braces

    while(!st.empty()){

        if(st.top() == '{')
            b++;
        else
            a++;

        st.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;

}

main(){

    string str = "{{{}}";

    cout<<findMinimumCost(str);

}