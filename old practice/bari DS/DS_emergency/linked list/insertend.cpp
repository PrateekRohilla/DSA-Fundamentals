#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head = NULL;

main(){
	
	int n;
	cout<<"how many nodes you want in linked list : ";
	cin>>n;
	
	Node *temp;
	
	for(int i=0;i<n;i++){
		int value;
		cout<<endl<<"Enter the data item for the Node "<<i+1<<" : ";
		cin>>value;
		if(i==0){
			head = new Node();
			head->data = value;
			head->next = NULL;
			temp = head;
		}
		else{
			temp->next = new Node();
			temp = temp->next;
			temp->data = value;
			temp->next = NULL;
		}
	}
	
	cout<<endl<<"well done you Linked List data is : "<<endl;
	
	temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	
	Node *last = new Node();
	last->next = NULL;
	
	cout<<"\n\nNow inserting one more node at the end of LL";
	cout<<endl<<"Enter the data item for the last node : ";
	cin>>last->data;
	
	temp = head;
	while(temp->next != NULL)
		temp = temp->next;
		
	temp->next = last;
	
	cout<<endl<<"well done one more node is added successfully .... \nyour Linked List data is : "<<endl;
	
	temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	
}
