#include<iostream>
#include "Node.cpp"
using namespace std;

main(){
	
	Node *head = NULL;
	
	Node *n1 = new Node(10);
	head = n1;
	
	Node *n2 = new Node(20);
	n1 -> next = n2;
	Node *n3 = new Node(30);
	n2 -> next = n3;
	Node *n4 = new Node(40);
	n3 -> next = n4;
	Node *n5 = new Node(50);
	n4 -> next = n5;
	n5 -> next = NULL;

	//printing the LL
	Node *temp = head;
	while(head != NULL){
		cout<<head -> data<<"  ";
		head = head -> next;
	}

}
