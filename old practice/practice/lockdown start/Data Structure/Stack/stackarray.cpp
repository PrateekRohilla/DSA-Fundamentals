#include<iostream>
// for using INT_MIN
#include<climits>
using namespace std;

class stackArr{
	
	int nextIndex;
	int capacity;
	//for dynamically creating array
	int *data;	
	
	public:
	//initialize values & dynamically create array with constructor	
	stackArr(int size){
		data = new int[size];
		nextIndex = 0;
		capacity = size;
	}
	
	// return number of elements presents in the stack
	int stacksize(){
		return nextIndex;
	}
	
	bool isEmpty(){
		return nextIndex == 0;
	}
	
	// insert element
	void push(int element){
		if(nextIndex == capacity){
			cout<<"Stack is full..";
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}
	
	// delete element
	int pop(){
		if(isEmpty()){
			cout<<"Stack is empty..";
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}
	
	int top(){
		if(isEmpty()){
			cout<<"Stack is empty..";
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
	
};

main(){
	stackArr s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	
	cout<<endl;
	
	cout<<"top element is "<<s.top()<<endl;
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<"top element is "<<s.top()<<endl;
	
	cout<<"is stack empty ? \t"<<s.isEmpty()<<endl;
	
	cout<<s.stacksize()<<endl;

	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}
