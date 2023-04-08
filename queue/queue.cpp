#include<iostream>
using namespace std;

class Queue{

    int* arr;
    int size;
    int front;
    int rear;

    public:

    Queue(int s){
        size = s; 
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int data){

        if(rear == size)
            cout<<"Queue full"<<endl;
        
        else{
            arr[rear] = data;
            rear++;
        }

    }

    void dequeue(){

        if(front == rear)
            cout<<"Queue empty"<<endl;

        else{
            arr[front] = -1;
            front++;

            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        
        if(front == rear)
            return -1;
        else
            return arr[front];
    }

    bool isEmpty(){
        if(front == rear)
            return true;
        else
            return false;
    }

};

main(){

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout<<q.getFront()<<endl;

    q.dequeue();
    q.dequeue();

    cout<<q.getFront()<<endl;

    cout<<q.isEmpty();
}