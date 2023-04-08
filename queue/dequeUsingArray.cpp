//non optimal solution for deque - insert functions take O(n) time
#include<iostream>
using namespace std;

class Deque{

    int* arr;
    int size;
    int capacity;

    public:

    Deque(int s){
        capacity = s;
        size = 0;
        arr = new int[capacity];
    }

    bool isFull(){
        if(size == capacity)
            return true;
        
        return false;
    }

    bool isEmpty(){
        if(size == 0)
            return true;
        
        return false;
    }

    void insertFront(int data){

        if(isFull()){
            cout<<"queue full !!"<<endl;
            return;
        }
        
        for(int i=size-1;i>=0;i--)
            arr[i+1] = arr[i];
        
        arr[0] = data;
        size++;
    }

    void insertRear(int data){
        
        if(isFull()){
            cout<<"queue full !!"<<endl;
            return;
        }

        arr[size] = data;
        size++;
    }

    void deleteFront(){

        if(isEmpty()){
            cout<<"queue empty !!";
            return;
        }

        for(int i=0;i<size-1;i++)
            arr[i] = arr[i+1];

        size--;
    }

    void deleteRear(){
        
        if(isEmpty()){
            cout<<"queue empty !!";
            return;
        }

        size--;
    }

    int getFront(){
        
        if(isEmpty())
            return -1;
        

        return arr[0];
    }

    int getRear(){
        
        if(isEmpty())
            return -1;

        return arr[size-1];
    }

    void printQueue(){

        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";

    }

};


main(){

    Deque dq(5);

    cout<<dq.isEmpty();
    
    cout<<endl;
    
    dq.insertFront(20);
    dq.insertFront(70);
    dq.insertFront(90);
    dq.insertFront(100);
    dq.insertRear(30);
    dq.insertRear(33);
    dq.insertRear(300);

    dq.deleteRear();
    
    cout<<dq.getFront()<<endl;

    dq.deleteFront();

    cout<<dq.getRear()<<endl;
    
    cout<<endl<<endl;

    dq.printQueue();
}