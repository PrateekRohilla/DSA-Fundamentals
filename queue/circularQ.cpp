#include<iostream>
using namespace std;

class CircularQ{

    int* arr;
    int size;
    int front;
    int rear;

    public:

    CircularQ(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int data){

        if((rear+1) % size == front){
            cout<<"Queue full"<<endl;
            return;
        }

        if(front == -1)
            front = 0;

        rear = (rear+1) % size;
        arr[rear] = data;
    }

    int dequeue(){
        
        if(front == -1){
            cout<<"queue empty"<<endl;
            return -1;
        }

        int popped = arr[front];

        if(front == rear)
            front = rear = -1;

        else
            front = (front+1) % size;

        return popped;
    }

    void printQ(){

        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
            return;
        }

        if(rear >= front)
            for(int i=front;i<=rear;i++)
                cout<<arr[i]<<" ";

        else{

            for(int i=front;i<size;i++)
                cout<<arr[i]<<" ";

            for(int i=0;i<=rear;i++)
                cout<<arr[i]<<" ";
        }

        cout<<endl<<endl;
    }

    bool isEmpty(){
        if(front == -1)    
            return true;
        
        return false;
    }

    int getFront(){
        if(isEmpty())
            return -1;
        
        return arr[front];
    }

};

main(){

    CircularQ q(4);

    cout<<q.isEmpty();

    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(10);

    cout<<endl;

    cout<<q.getFront();

    cout<<endl;

    cout<<q.dequeue();
    cout<<q.dequeue();
    cout<<q.dequeue();

    cout<<endl;

    cout<<q.isEmpty();

    cout<<endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.printQ();
}