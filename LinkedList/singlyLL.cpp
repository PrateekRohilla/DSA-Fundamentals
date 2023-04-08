#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head, Node* &tail, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;  
        return;
    }

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        count++;
        temp = temp -> next;
    }

    //check for last node
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

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

int getLength(Node* &head){
    
    if(head == NULL)
        return 0;

    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

//position based node deletion
void deleteNode(Node* &head, Node* &tail, int pos){

    Node* prev;
    Node* curr = head;

    //deleting first node
    if(pos == 1){
        head = head -> next;
        curr -> next = NULL;
        delete curr;
    }

    //deleting middle or last node
    else{

        prev = NULL;

        int count = 1;
        while(count < pos){

            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

    if(prev -> next == NULL)
        tail = prev;

}

main(){

    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = head;

    insertAtHead(head, tail, 20);
    
    insertAtHead(head, tail, 15);

    insertAtTail(tail, 50);

    insertAtPosition(head, tail, 2, 30);

    cout<<"List : ";
    print(head);

    cout<<endl<<endl;

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    deleteNode(head,tail,1);

    cout<<endl<<endl;

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    cout<<"List : ";
    print(head);

    cout<<endl<<endl;

    insertAtHead(head, tail, 1);

    cout<<"List : ";
    print(head);
}