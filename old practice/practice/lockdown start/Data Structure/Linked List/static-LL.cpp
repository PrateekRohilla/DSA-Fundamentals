#include<iostream>
//including Node class file
#include "Node.cpp"

using namespace std;

int main(){
	
	Node *head = NULL;
	
	//statically creating node
	Node n1(1);
	
	head = &n1;
	
	Node n2(2);
	n1.next = &n2;
	Node n3(3);
	n2.next = &n3;
	Node n4(4);
	n3.next = &n4;
	Node n5(5);
	n4.next = &n5;
	Node n6(6);
	n5.next = &n6;
	Node n7(7);
	n6.next = &n7;
	Node n8(8);
	n7.next = &n8;
	Node n9(9);
	n8.next = &n9;
	

	Node *traverse = head;
	
	for(int i=0;i<9;i++)
	{
		cout<<traverse -> data<<"  ";
		traverse = traverse -> next;
	}
	
}

