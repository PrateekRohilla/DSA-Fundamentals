#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

class Stack{
	
	Node* head;
	int size; // no of elements present
	
	public:
		
	Stack(){
		head = NULL;
		size = 0;	
	}
	
	int getSize(){
		return size;
	}
	
	bool isEmpty(){
		return size == 0;
	}
	
	void push(int element){
		
		Node* newNode = new Node(element);
		newNode->next = head;
		head = newNode;
		size++;
	}
	
	int pop(){
		
		if(isEmpty())
			return 0;
		
		int ans = head->data;
		Node* temp = head;
		head = head->next;
		size--;
		delete temp;
		return ans;
	}
	
	int top(){
		if(isEmpty())
			return 0;
			
		return head->data;
	}
	
};

main(){
	
	Stack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<s.getSize()<<endl;
	
	cout<<s.isEmpty()<<endl;
	
}
