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

Node* middle(Node* head){

    if(head == NULL || head -> next == NULL)
        return head;

    if(head -> next -> next == NULL)
        return head -> next;

    Node* fast = head -> next;
    Node* slow = head;

    while(fast != NULL){

        fast = fast -> next;
        if(fast != NULL)
            fast = fast -> next;
        
        slow = slow -> next;
    }

    return slow;
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

    Node* ans = middle(head);
    cout<<ans -> data;
}