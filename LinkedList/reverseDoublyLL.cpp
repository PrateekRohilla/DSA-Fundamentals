#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

Node* reverseDoubly(Node* head){

    if(head == NULL || head -> next == NULL)
        return head;

    Node* t = NULL;
    Node* curr = head;

    //swap next & prev of all nodes of doubly linked list
    while(curr != NULL){

        t = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = t;

        curr = curr -> prev;
    }

    //update head
    head = t->prev;

    return head;
}

void print(Node* &head){

    if(head == NULL){
        cout<<"list is empty!!"<<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }

    cout<<endl;
}

main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    
    head -> next = a;

    a -> next = b;
    a -> prev = head;

    b -> next = c;
    b -> prev = a;
    
    c -> next = d;
    c -> prev = b;

    d -> prev = c;


    Node* reversed = reverseDoubly(head);
    print(reversed);
}