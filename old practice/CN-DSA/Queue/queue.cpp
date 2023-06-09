#include<iostream>
using namespace std;

class Queue{
	
	int *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public:
	
	Queue(int s){
		
		data = new int[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
		
	}
	
	int getSize(){
		return size;
	}
	
	bool isEmpty(){
		return size == 0;
	}
	
	//insert element
	void enqueue(int element){
		
		if(size == capacity){
			cout<<"queue full !!"<<endl;
			return;
		}
		
		data[nextIndex] = element;
		nextIndex = (nextIndex+1) % capacity;
		
		if(firstIndex == -1)
			firstIndex = 0;
		
		size++;

	}
	
	int front()	{
		if(isEmpty()){
			cout<<"Queue is empty !!";
			return 0;
		}
		return data[firstIndex];
	}
	
	//delete element
	int dequeue(){
		
		if(isEmpty()){
			cout<<"Queue is empty !!";
			return 0;
		}
		
		int ans = data[firstIndex];
		firstIndex = (firstIndex+1) % capacity;
		
		size--;
		
		if(size == 0){
			firstIndex = -1;
			nextIndex = 0;
		}
		
		return ans;
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
	
	cout<<q.front()<<endl;
	
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	
	cout<<q.getSize()<<endl;
	
	cout<<q.isEmpty()<<endl;
	
	
}
