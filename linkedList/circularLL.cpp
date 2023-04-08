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

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        tail -> next = tail;
    }
    else{

        //non-empty list
        //assuming element is present

        Node* curr = tail;

        while(curr -> data != element)
            curr = curr -> next;

        //element found (curr node)
        Node* newNode = new Node(d);
        newNode -> next = curr -> next;
        curr -> next = newNode;
    }
}

void print(Node* tail){

    if(tail == NULL){
        cout<<"list is empty!!"<<endl;
        return;
    }

    Node* temp = tail;

    do{
        cout<<tail -> data <<" ";
        tail = tail -> next;
    }while(tail != temp);

    cout<<endl<<endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
    }
    else{

        //assuming value is present
        Node* prev = tail;
        Node* curr = tail -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //only one node exists
        if(curr == prev)
            tail = NULL;

        // >=2 node exists
        else if(tail == curr)
            tail = prev;
        curr -> next = NULL;
        delete curr;
    }
}

main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail,3);
    print(tail);


}