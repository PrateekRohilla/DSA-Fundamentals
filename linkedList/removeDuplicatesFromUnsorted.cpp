#include<iostream>
#include<map>
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
    Node* prev = NULL;
    map<int, bool> visited;

    while(curr != NULL){
        
        if(visited[curr->data] == true){
            prev -> next = curr -> next;
            delete curr;
        }
        else{
            visited[curr->data] = true;
            prev = curr;
        }
        curr = prev -> next;
    }

    return;
}


main(){

    Node* head = new Node(4);
    head -> next = new Node(2);
    head -> next -> next = new Node(5);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next = new Node(2);

    print(head);

    removeDuplicates(head);

    print(head);
    
}