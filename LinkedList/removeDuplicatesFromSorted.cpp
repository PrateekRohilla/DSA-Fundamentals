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

void print(Node* list){

    if(list == NULL)
        cout<<"empty!!"<<endl;

    Node *first = list;

    while(first != NULL){
        cout<<first->data<<" ";
        first = first -> next;
    }
    cout<<endl;
}

void removeDuplicates(Node* head){

    if(head == NULL)
        return;

    Node* curr = head;

    while(curr != NULL){
        
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            delete temp;
        }
        else
            curr = curr -> next;
    }

    return;
}


main(){

    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(3);
    head -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next = new Node(4);

    print(head);

    removeDuplicates(head);

    print(head);
    
}