#include<iostream>
using namespace std;

class Stack{
	
	int *data;
	int nextIndex;
	int capacity;
	
	public:
		
		Stack(int totalsize){
			
			data = new int[totalsize];
			nextIndex = 0;
			capacity = totalsize;
			
		}
		
		//number of elements in stack
		int size(){
			return nextIndex;
		}
				
		bool isEmpty(){
			
			/*
			if(nextIndex == 0)	
				return true;
			
			return false;
			*/
			
			return nextIndex == 0;
			
		}
		
		void push(int element){
			
			if(nextIndex == capacity){
				cout<<"Stack Full !!"<<endl;
				return;
			}
			
			data[nextIndex] = element;
			nextIndex++;
			
		}
	
		int pop(){
		
			if(isEmpty()){
				cout<<"Stack is empty !!"<<endl;
				return INT_MIN;
			}
			
			nextIndex--;
			return data[nextIndex];
			
		}
		
		int top(){
			
			if(isEmpty()){
				cout<<"Stack is empty !!"<<endl;
				return INT_MIN;
			}
			
			return data[nextIndex-1];
			
		}
		
		
};

main(){
	
	Stack s(4);
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<s.size()<<endl;
	
	cout<<s.isEmpty()<<endl;


	/*
	In case of stack using array -
	every operation takes O(1) time
	*/
	
}
