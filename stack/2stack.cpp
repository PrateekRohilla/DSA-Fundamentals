//2 stacks using only one array
#include<iostream>
using namespace std;

class TwoStack{

    int *arr;
    int top1;
    int top2;
    int size;

    public:

    TwoStack(int s){
        this -> size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }

    //for stack 1
    void push1(int data){
        
        //atleast a empty space present
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = data;
            return;
        }

        cout<<"stack1 full !!"<<endl;
    }

    void pop1(){
        
        if(top1 > -1)
            top1--;
        else
            cout<<"stack1 underflow !!";
    }

    //for stack 2
    void push2(int data){
        
        if(top2 - top1 > 1){
            arr[top2] = data;
            top2--;
            return;
        }

        cout<<"stack2 full !!"<<endl;

    }

    void pop2(){
        
        if(top2 < size)
            top2++;
        else
            cout<<"stack2 underflow !!";

    }

};

main(){

    TwoStack s(7);

    s.push1(1);
    s.push1(2);
    s.push1(3);

    s.push2(4);
    s.push2(5);
    s.push2(6);

    
    s.push2(20);
    s.push1(10);
    
}