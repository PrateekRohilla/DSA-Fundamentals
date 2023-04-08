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

bool isCircular(Node* head){

    //empty list
    if(head == NULL)
       return true;

    Node* temp = head -> next;

    while(temp != NULL && temp != head)
        temp = temp -> next;

    if(temp == head)
        return true;

    return false;
}

Node* splitCircular(Node* &head){

    Node* temp = head;

    Node* slow = head;
    Node* fast = head->next;

    while(fast->next != temp){

        slow = slow -> next;

        fast = fast -> next;
        if(fast->next != temp)
            fast = fast -> next;

    }


    Node* head2 = slow -> next ;
    slow -> next = head;

    fast -> next = head2;

    return head2;
}

main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    head -> next = a;
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;
    e -> next = head;

    Node* second = splitCircular(head);

    print(head);
    print(second);

    cout<<isCircular(head);
    cout<<endl;
    cout<<isCircular(second);

}