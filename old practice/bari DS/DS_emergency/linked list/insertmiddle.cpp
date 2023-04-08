#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head = NULL;

main(){
	
	int n;
	cout<<"how many elements you want in linked list : ";
	cin>>n;
	
	Node *temp;
	
	for(int i=0;i<n;i++){
		
		int value;
		cout<<"\nEnter the data item for node "<<i+1<<" : ";
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
	
	cout<<"\nWell done\nyour LL is : ";
	
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	
	Node *middle = new Node();
	middle->next = NULL;
	int pos;
	cout<<"\nNow Lets insert a node at a specified position.."<<endl;
	cout<<"Enter the position & the element you want to insert : ";
	cin>>pos>>middle->data;
	
	
	temp = head;
	for(int i=1;i<pos-1;i++){
		temp = temp->next;
	}
	middle->next = temp->next;
	temp->next = middle;
	
	temp = head;
	cout<<"\nWell done\nyour LL is : ";
	
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
}
