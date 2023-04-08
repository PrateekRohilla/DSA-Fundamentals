#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head = NULL;

main(){
	
	int a[6] = {12,23,34,45,56,67};
	
	Node *temp;
	
	int n;
	cout<<"Enter the number of nodes you want in linked list : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		if(i==0){
			head = new Node();
			head->data = a[i];
			head->next = NULL;
			temp = head;
		}
		else{
			temp->next = new Node();
			temp = temp->next;
			temp->data = a[i];
			temp->next = NULL;
		}
	}
	
	cout<<"your LL is : ";
	
	temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
	cout<<"\nwell done ..\nNow you have to delete the first node of this LL\n\n";
	
	Node *dump = head;
	head = head->next;
	delete dump;
	
	cout<<"your LL is : ";
	
	temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
}
