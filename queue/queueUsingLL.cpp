#include<iostream>
using namespace std;

class Qnode{

    public: 
    int data;
    Qnode* next;

    Qnode(int d){
        data = d;
        next = NULL;
    }

};

class Queue{

    Qnode* front;
    Qnode* rear;

    public:

    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data){
        
        Qnode* newNode = new Qnode(data);

        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }

        rear -> next = newNode;
        rear = newNode;
    }

    void dequeue(){

        if(front == NULL){
            cout<<"empty queue"<<endl;
            return;
        }

        Qnode* t = front;
        front = front -> next;

        if(front == NULL)
            rear = NULL;

        delete t;
    }

    int getFront(){

        if(front == NULL)
            return -1;

        return front -> data;
    }

    bool isEmpty(){
        return front == NULL;
    }

    void displayQ(){

        Qnode* t = front;

        while(t){
            cout<<t -> data<<" ";
            t = t -> next;
        }
        cout<<endl;
    }

};

main(){

    Queue q;

    cout<<q.isEmpty();

    cout<<endl;

    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(12);

    q.displayQ();
}