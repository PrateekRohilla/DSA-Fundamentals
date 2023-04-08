#include<iostream>
#include<queue>
using namespace std;

main(){

    deque<int> d;

    d.push_front(10);
    d.push_back(20);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();
    d.pop_front();

    cout<<d.back()<<endl;

    cout<<d.empty();

}