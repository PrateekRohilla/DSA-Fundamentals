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

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node* head){

    //dummy nodes
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    
    //require tail for insertions
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;
    Node* twoTail = twoHead;

    Node* curr = head;

    //create separate list for 0s, 1s, 2s
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0)
            insertAtTail(zeroTail, curr);
        else if(value == 1)
            insertAtTail(oneTail, curr);
        else if(value == 2)
            insertAtTail(twoTail, curr);

        curr = curr -> next;
    }

    //merge 3 sublists

    //1s list not empty
    if(oneHead->next != NULL)
        zeroTail -> next = oneHead -> next;
    //1s list empty
    else
        zeroTail -> next = twoHead -> next;

    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead -> next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

main(){

    Node* head = new Node(0);
    head -> next = new Node(1);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next -> next = new Node(2);

    sortList(head);

    print(head);
    
}