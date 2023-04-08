#include<iostream>
using namespace std;

template <typename T>
class Stack{
	
	T *data;
	int nextIndex;
	int capacity;
	
	public:
		
		Stack(int totalsize){
			
			data = new T[totalsize];
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
		
		void push(T element){
			
			if(nextIndex == capacity){
				cout<<"Stack Full !!"<<endl;
				return;
			}
			
			data[nextIndex] = element;
			nextIndex++;
			
		}
	
		T pop(){
		
			if(isEmpty()){
				cout<<"Stack is empty !!"<<endl;
				return 0;
			}
			
			nextIndex--;
			return data[nextIndex];
			
		}
		
		T top(){
			
			if(isEmpty()){
				cout<<"Stack is empty !!"<<endl;
				return 0;
			}
			
			return data[nextIndex-1];
			
		}
		
		
};

main(){
	
	Stack<char> s(4);
	
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	
	cout<<s.top()<<endl;
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<s.size()<<endl;
	
	cout<<s.isEmpty()<<endl;
	
}
