#include<iostream>
using namespace std;

class Node{
	
	public:
	
		int data;
		Node *next;
			
		Node(int data){
			
			this -> data = data;
			next = NULL;
		
		}
	
		
};
/*
Node* takeInput(){
	
	int data;
	cin>>data;
	
	Node *head = NULL;
	
	while(data != -1){
		
		Node *newNode = new Node(data);
		
		if(head == NULL)
			head = newNode;
		else{
			Node *temp = head;
			
			while(temp->next != NULL)
				temp = temp -> next;
			
			temp -> next = newNode;
		}
		
		cin>>data;
	}
	
	return head;
	
}
*/

Node* takeInput_improved(){
	
	int data;
	cin>>data;
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -1){
		
		Node *newNode = new Node(data);
		
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail -> next = newNode;
			tail = tail -> next;
		}
		
		cin>>data;
		
	}
	
	return head;
	
}
void print(Node *head){
			
	while(head != NULL){
		cout<<head->data<<"  ";
		head = head->next;
	}		
}
		
Node* insertNode(Node *head, int i, int data){
	
	Node *newNode = new Node(data);
	
	if(i == 0){
		newNode -> next = head;
		head = newNode;
		return head;
	}
	
	Node *temp = head;
	
	int count = 0;
	
	while(temp != NULL && count < i-1){
		
		count++;
		temp = temp -> next;
		
	}
	
	newNode -> next = temp -> next;
	temp -> next = newNode;
	
	return head;
	
}

main(){
	
	/*
	//statically
	Node n1(10);
	
	Node *head = &n1;
	
	Node n2(20);
	n1.next = &n2;
	
	
	//dynamically
	Node *n3 = new Node(30);
	n2.next = n3;
	
	Node *n4 = new Node(40);
	
	n3->next = n4;
	*/
	
	Node *head = takeInput_improved();
	
	print(head);
	
	int position,data;
	cin>>position>>data;
	
	head = insertNode(head,position,data);
	print(head);
	
}
