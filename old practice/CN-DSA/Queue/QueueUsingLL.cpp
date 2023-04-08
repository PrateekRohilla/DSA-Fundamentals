#include<iostream>
using namespace std;

class Node{
	public:
	
	int data;
	Node *next;
	
	Node(int data){
		this->data = data;
		next = NULL;
	}
};

class Queue{
	
	Node *head;
	Node *tail;
	
	int size;
	
	public:
		
	Queue(){
		head = NULL;
		tail = NULL;
		size = 0;
	}
	
	int getSize(){
		return size;
	}
	
	bool isEmpty(){
		return size == 0;
	}
	
	void enqueue(int element){
		
		Node *newNode = new Node(element);
		
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
		}
		
		size++;
	}
	
	int front(){
		if(isEmpty())
			return 0;
		return head->data;
	}
	
	int dequeue(){
		
		if(isEmpty())
			return 0;
		
		int ans = head->data;
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
		return ans;	
	}
};

main(){
	
	Queue q;
	
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
