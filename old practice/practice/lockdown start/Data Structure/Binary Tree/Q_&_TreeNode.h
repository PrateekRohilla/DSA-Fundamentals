#include<iostream>
using namespace std;

class BTNode{
	int data;
	BTNode *leftChild;
	BTNode *rightChild;
};

class Qarray{
	
	BTNode *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public:
	
	/*
	Qarray(){
		data = new int[s];
		nextIndex = 0;
		firstIndex  = -1;
		size = 0;
		capacity = s;
	}
	*/
	
	void createQ(){
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
