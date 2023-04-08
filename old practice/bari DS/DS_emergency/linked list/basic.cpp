#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head = new Node();

main(){
	
	Node *first = new Node();
	first->data = 75;
	first->next = NULL;
	head=first;
	
	cout<<"First LL created successfully ..!!"<<endl;
	cout<<"Data is "<<first->data;
}
