#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

bool isCircular(Node* head){

    //empty list
    if(head == NULL)
       return true;

    Node* temp = head -> next;

    while(temp != NULL && temp != head)
        temp = temp -> next;

    if(temp == head)
        return true;

    return false;
}

main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head -> next = a;
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = head;

    cout<<isCircular(head);
    
}