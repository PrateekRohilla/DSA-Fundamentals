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

Node* kReverse(Node* head, int k){

    if(head == NULL)
        return head;

    //reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int count = 0;

    while(curr != NULL && count < k){

        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    //recursive call
    if(forward != NULL)
        head -> next = kReverse(forward, k);

    //return head of reversed list
    return prev;
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

    Node* reversed = kReverse(head,2);
    
    print(reversed);
    cout<<endl;

}   