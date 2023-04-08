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
        front = rear = -1;
    }

    bool enqueue(int data){

        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue full"<<endl;
            return false;
        }
        
        else if(front == -1)// first element to insert
            front = rear = 0;

        else if(rear == size-1 && front != 0)
            rear = 0;
            
        else
            rear++;
        
        arr[rear] = data;
        return true;
    }

    int dequeue(){

        if(front == -1){
            cout<<"Queue full"<<endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)//single element present
            front = rear = -1;

        else if(front == size-1)
            front = 0;
        
        else
            front++;

        return ans;
    }

};

main(){

    CircularQ q(5);

    cout<<q.enqueue(10);
    cout<<q.enqueue(20);
    cout<<q.enqueue(30);
    cout<<q.enqueue(40);
    cout<<q.enqueue(50);
    cout<<q.enqueue(60);
    
    cout<<endl;

    cout<<q.dequeue();
    cout<<q.dequeue();
    cout<<q.dequeue();

    cout<<q.enqueue(10);
    cout<<q.enqueue(20);
    cout<<q.enqueue(30);
    
}