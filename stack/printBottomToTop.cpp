#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s){

    if(s.empty())
        return;

    int t = s.top();

    s.pop();

    printStack(s);

    cout<<t<<" ";
    
    s.push(t);

}

main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    printStack(s);

}