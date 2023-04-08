//optimal solution for deque (all operations in O(1)) - treat array as circular buffer
#include<iostream>
using namespace std;

class Deque{

    int* arr;
    int size;
    int front;
    int rear;

    public:

    Deque(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = 0;
    }

    bool isFull(){
        return ((front == 0 && rear == size-1) || (front == (rear+1)%size));
    }

    bool isEmpty(){
        return front == -1;
    }

    void insertFront(int data){

        if(isFull()){
            cout<<"Queue full"<<endl;
            return;
        }

        //if queue initially empty
        if(front == -1){
            front = 0;
            rear = 0;
        }

        //front is at first position of queue
        else if(front == 0)
            front = size-1;

        else
            front = front-1;

        arr[front] = data;
    }

    void insertRear(int data){

        if(isFull()){
            cout<<"Queue full"<<endl;
            return;
        }

        //if queue intially empty
        if(front == -1){
            front = 0;
            rear = 0;
        }

        //rear is at last position of queue
        else if(rear == size-1)
            rear = 0;

        else
            rear = rear+1;

        arr[rear] = data;
    }

    void deleteFront(){

        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }

        //only one element present
        if(front == rear){
            front = -1;
            rear = -1;
        }

        //back to intial position
        else if(front == size-1)
            front = 0;
        
        else
            front = front+1;
    }

    void deleteRear(){

        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }

        //only one element present
        if(front == rear){
            front = -1;
            rear = -1;
        }

        else if(rear == 0)
            rear = size-1;

        else
            rear = rear-1;
    }

    int getFront(){
        
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return -1;
        }

        return arr[front];
    }

    int getRear(){
        
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return -1;
        }

        return arr[rear];
    }

};


main(){

    Deque dq(5);

    dq.deleteRear();

    dq.insertFront(20);
    dq.insertFront(10);
    dq.insertRear(30);

    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
}