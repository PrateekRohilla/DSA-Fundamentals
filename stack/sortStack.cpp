#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int t){

    if((s.empty()) || (s.top() < t)){
        s.push(t);
        return;
    }

    int n = s.top();

    s.pop();

    sortedInsert(s,t);

    s.push(n);

}

void sortStack(stack<int> &s){

    if(s.empty())
        return;

    int t = s.top();

    s.pop();

    sortStack(s);

    sortedInsert(s, t);

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

    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    sortStack(s);

    printStack(s);

}