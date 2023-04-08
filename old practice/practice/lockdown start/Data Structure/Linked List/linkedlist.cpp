#include<iostream>
#include "Node.cpp"
using namespace std;

Node* createNode(){
	
	int data;
	cin>>data;
	Node *head = NULL;
	Node *temp = head;
	Node *insert = NULL;
	while(data != -1){
		Node *getNode  = new Node(data);
		if(head == NULL)
		{
			head = getNode;
			temp = head;
			temp -> next = NULL;
		}
		else
		{
			temp -> next = getNode;
			temp = temp -> next;
		}
		cin>>data;
	}
	
	return head;
}

main(){
	cout<<"Lets create a linkedlist ... ";
	cout<<endl;
	Node *traverse = createNode();
	cout<<endl;
	while(traverse != NULL){
		
		cout<<endl;
		
		//output
		cout<<traverse -> data<<"  ";
		
		
		//output detailed
		//cout<<"1. " << traverse <<"  " << traverse -> data <<"  " << traverse -> next;
		
		
		traverse = traverse -> next;
	}
}
