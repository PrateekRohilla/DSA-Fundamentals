#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x){

    if(s.empty()){
        s.push(x);
        return;
    }

    int t = s.top();

    s.pop();

    insertAtBottom(s, x);

    s.push(t);
}

void printStack(stack<int> s){

    if(s.empty())
        return;

    int t = s.top();

    cout<<t<<" ";

    s.pop();

    printStack(s);

    s.push(t);
}

main(){

    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);

    insertAtBottom(s, 1);

    printStack(s);

}