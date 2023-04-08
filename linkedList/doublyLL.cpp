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

void print(Node* &head, Node* &tail){

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

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(tail == NULL){
        tail = temp;
        head = temp;
    }
    else{
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){

    if(pos == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos-1){
        count++;
        temp = temp -> next;
    }

    if(temp -> next ==NULL){
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> prev = temp;
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;

}

void deleteNode(Node* &head, Node* &tail, int pos){

    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next ->prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else{
        
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < pos){
            count++;
            previous = current;
            current = current -> next;
        }

        current -> prev = NULL;
        previous -> next = current -> next;
        current -> next = NULL;

        delete current;

        if(previous -> next == NULL)
            tail = previous;
    }

}


main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head, tail, 10);
    print(head, tail);

    insertAtTail(head, tail, 100);
    print(head, tail);

    insertAtPosition(head, tail, 2, 20);
    print(head, tail);

    cout<<endl<<endl;

    deleteNode(head, tail, 3);
    print(head, tail);

}