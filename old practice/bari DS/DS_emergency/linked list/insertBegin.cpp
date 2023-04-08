#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

main(){
	
	struct Node *first = new Node();
	struct Node *second = new Node();
	struct Node *third = new Node();
	struct Node *fourth = new Node();
	
	head = first;
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = NULL;
	
	cout<<"Enter data for node 1 : ";
	cin>>first->data;
	cout<<endl<<"Enter data for node 2 : ";
	cin>>second->data;
	cout<<endl<<"Enter data for node 3 : ";
	cin>>third->data;
	cout<<endl<<"Enter data for node 4 : ";
	cin>>fourth->data;
	
	cout<<endl<<"traversing the LL .."<<endl;
	
	struct Node *temp =head;
	
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	
	
	struct Node *veryFirst = new Node();
	
	cout<<endl<<"inserting Node at the begin of LL .."<<endl;
	
	cout<<endl<<"Enter the data item of the very first node : ";
	cin>>veryFirst->data;
	
	veryFirst->next = head;
	head = veryFirst;
	
	cout<<endl<<"traversing the LL .."<<endl;
	
	temp =head;
	
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	
	
	
}
