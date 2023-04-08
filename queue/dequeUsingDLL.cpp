#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class Deque{
        
    Node* front;
    Node* rear;

    public:

    Deque(){
        front = NULL;
        rear = NULL;
    }

    void insertFront(int d){

        if(front == NULL){
            Node* newNode = new Node(d);
            front = rear = newNode;
            return;
        }

        Node* newNode = new Node(d);
        newNode -> next = front;
        front -> prev = newNode;
        front = newNode;
    }

    void insertRear(int d){

        if(rear == NULL){
            Node* newNode = new Node(d);
            front = rear = newNode;
            return;
        }

        Node* newNode = new Node(d);
        rear -> next = newNode;
        newNode -> prev = rear;
        rear = newNode;
    }

    void deleteFront(){

        if(front == NULL)
            cout<<"queue empty!!";

        Node* t = front;
        front = front -> next;
        t -> next = NULL;
        front -> prev = NULL;
        delete t;
    }

    void deleteRear(){
        
        if(rear == NULL)
            cout<<"queue empty!!";

        Node* t = rear;
        rear = rear -> prev;
        rear -> next = NULL;
        t -> prev = NULL;
        delete t;
    }

    bool isEmpty(){
        return front == NULL;
    }

    int getFront(){
        
        if(isEmpty())
            return -1;

        return front -> data;
    }

    int getRear(){
        
        if(isEmpty())
            return -1;

        return rear -> data;
    }

    void printQueue(){

        if(front == NULL){
            cout<<"queue empty!!";
            return;
        }

        Node* t = front;
        while(t != NULL){
            cout<<t -> data<<" ";
            t = t -> next;
        }
    }

};

main(){

    Deque dq;
    
    dq.printQueue();

    cout<<endl<<endl;

    cout<<dq.isEmpty();
    
    cout<<endl<<endl;

    dq.insertFront(21);

    cout<<dq.getFront();
    
    cout<<endl<<endl;

    dq.insertFront(31);
    dq.insertFront(41);
    dq.insertFront(51);
    dq.insertRear(11);
    dq.insertRear(1);

    cout<<dq.getRear();

    cout<<endl<<endl<<endl;

    dq.printQueue();
    
    cout<<endl<<endl;

    dq.deleteFront();

    dq.deleteRear();

    dq.printQueue();
}