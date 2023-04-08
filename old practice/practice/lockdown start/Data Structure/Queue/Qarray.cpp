//Queue using array (circular fashion variant)
#include<iostream>
using namespace std;

class Qarray{
	
	int *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public:
	
	Qarray(int s){
		data = new int[s];
		nextIndex = 0;
		firstIndex  = -1;
		size = 0;
		capacity = s;
	}
	
	int getsize(){
		return size;
	}
	
	bool isEmpty(){
		return size == 0;
	}
	
	// to insert element
	void enqueue(int element){
		if(size == capacity){
			cout<<"Queue full !!";
			return;
		}
		data[nextIndex] = element;
		// to insert element in circular fashion
		nextIndex = (nextIndex+1)%capacity;
		if(firstIndex == -1)
			firstIndex = 0;
		size++;
	}
	
	int front(){
		if(isEmpty())
		{
			cout<<"Queue is empty !!";
			return 0;
		}
		return data[firstIndex];
	}
	
	int dequeue(){
		if(isEmpty())
		{
			cout<<"Queue is empty !!";
			return 0;
		}
		int deleted = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if(size == 0)
		{
			firstIndex = -1;
			nextIndex = 0;	
		}
		return deleted;
	}
};


main(){
	
	Qarray q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	
	cout<<endl<<q.front();
	
	cout<<endl<<q.getsize();
	
	cout<<endl<<q.dequeue();
	cout<<endl<<q.dequeue();
	cout<<endl<<q.dequeue();
	
	cout<<endl<<q.front();
	cout<<endl<<q.getsize();
	
}
