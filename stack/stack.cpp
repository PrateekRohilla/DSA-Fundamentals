#include<iostream>
using namespace std;

class stack{

    public:
    int *arr;
    int top;
    int size;

    stack(int s){
        this -> size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int data){

        if(size - top > 1){
            top++;
            arr[top] = data;
            return; 
        }

        cout<<"stack overflow !!"<<endl;

    }

    void pop(){

        if(top >= 0)
            top--;
        else
            cout<<"stack underflow !!";

    }

    int peek(){
        
        if(top >= 0)
            return arr[top];
        else
            return -1;
    }

    bool empty(){
        
        if(top == -1)
            return true;
        else
            return false;
    }

};

main(){

    stack s(4);

    //cout<<s.empty();

    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(9);

    s.pop();
    s.pop();

    cout<<s.peek();
}