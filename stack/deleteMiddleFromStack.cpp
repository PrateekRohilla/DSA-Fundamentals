#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size){

    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack, count+1, size);

    inputStack.push(num);

}

void deleteMiddle(stack<int> &inputStack, int N){

    if(inputStack.empty())
        return;

    int count = 0;
    solve(inputStack, count, N);
}

void printStack(stack<int> st){
    
    if(st.empty())
        return;

    int t = st.top();

    st.pop();

    cout<<t<<" ";

    printStack(st);

    st.push(t);

}

main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);


    int k = s.size();

    deleteMiddle(s, k);

    printStack(s);

}