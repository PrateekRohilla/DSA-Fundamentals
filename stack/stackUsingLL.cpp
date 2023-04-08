#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class stack{

   public:
    Node* top;

    stack(){
        top = NULL;
    }

    void push(int data){

        Node* newNode = new Node(data);
    
        newNode -> next = top;
        top = newNode;
    }

    void pop(){
        
        if(top == NULL){
            cout<<"stack empty"<<endl;
            return;
        }

        Node* temp = top;
        top = top -> next;
        temp -> next = NULL;
        delete temp;
    }

    int getTop(){

        if(top == NULL){
            cout<<"stack empty"<<endl;
            return -1;
        }

        return top -> data;
    }

    bool empty(){

        return top == NULL;
    }

};

main(){

    stack s;

    cout<<s.empty();

    cout<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.getTop();

    cout<<endl;

    s.pop();
    s.pop();

    cout<<s.getTop();
}