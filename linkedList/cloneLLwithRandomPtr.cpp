//clone linked list with next & random pointer
#include<iostream>
#include<unordered_map>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* random;

    Node(int d){
        data = d;
        next = NULL;
        random = NULL;
    }

};

void insertAtTail(Node* head, Node* tail, int d){

    Node* newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail -> next = newNode;
    tail = newNode;

}

Node* copyList(Node* head){

    //step 1: create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp -> next;
    }

    //step 2: create a map
    unordered_map<Node*, Node*> oldToNewNode;

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL){

        oldToNewNode[originalNode] = cloneNode;

        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }


    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL){

        cloneNode -> random = oldToNewNode[originalNode -> random];

        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }

    return cloneNode;
}

main(){
    
}