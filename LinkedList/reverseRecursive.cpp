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

Node* reverseRecursive(Node* head){

    if(head == NULL || head -> next == NULL)
        return head;

    Node* rest = reverseRecursive(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return rest;
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
    b -> next = c;
    c -> next = d;

    print(head);
    cout<<endl;

    Node* reversed = reverseRecursive(head);
    
    print(reversed);
    cout<<endl;

}   