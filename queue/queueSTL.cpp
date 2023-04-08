#include<iostream>
#include<queue>
using namespace std;

main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<q.front();

    cout<<endl;

    cout<<q.back();

    cout<<endl;

    q.pop();
    q.pop();

    cout<<endl<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}