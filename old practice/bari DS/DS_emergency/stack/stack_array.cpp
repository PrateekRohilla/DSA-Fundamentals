#include<iostream>
using namespace std;

class stack{
	public:
		int top=-1;
		int arr[6];
		void push();
		void pop();
		void isempty();
		void display();
};

void stack :: push(){
	if(top == 5)
		cout<<"\nStack is full..";
	else{
		int x;
		cout<<"\nEnter the element you want to insert : ";
			cin>>x;
			top++;
			arr[top] = x;
			cout<<"\n"<<x<<" pushed successfully ..";
	}
}

void stack :: pop(){
	if(top == -1)
		cout<<"stack underflow ..\nthere is no element\n";
	else{
		cout<<"\n"<<arr[top]<<" popped successfully ..";
		top--;
	}
}

void stack :: isempty(){
	if(top<0)
		cout<<"\nstack is empty ..";
	else{
		cout<<"\nStack is not empty ..";
	}
}

void stack :: display(){
	if(top == -1)
		cout<<"\nstack is empty .. ";
	else{
		cout<<"\nstack elements are : ";
		for(int i=0;i<=top;i++)
		cout<<arr[i]<<"  ";
	}
}

int main(){
	
	stack st;
	
	int choice;
	int ch=0;
	
	cout<<"\nyour stack is ready ..\nStart performing operation on it";
	do{
		
		cout<<"\nSelect one of the option : ";
		cout<<"\n\t1.Push element\n\t2.Pop element\n\t3.Check Is Empty?\n\t4.Show stack\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		
		switch(choice){
			
			case 1:
				st.push();
				break;
				
			case 2:
				st.pop();
				break;
				
			case 3:
				st.isempty();
				break;
			
			case 4:
				st.display();
				break;
				
			default:
				cout<<"\nJitna bola h utna hi kar  ...\n";
				break;
				
			
		}
			
		cout<<"\n\nDo you want to perform some more operation : ";
		cin>>ch;
			
	}while(ch);
	
}
