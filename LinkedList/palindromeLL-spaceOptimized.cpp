#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    char data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

Node* getMiddle(Node* head){
    
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){

        fast = fast -> next;
        if(fast != NULL)
            fast = fast -> next;

        slow = slow -> next;
    }

    return slow;
}

void reverse(Node* &head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

}

bool palindromeLL(Node* head){

    if(head == NULL || head->next == NULL)
        return true;

    //find middle
    Node* middle = getMiddle(head);
    
    //reverse after middle
    reverse(middle);

    Node* a1 = head;
    Node* a2 = middle->next;
    
    //compare
    while(a2 != NULL){
        
        if(a1->data != a2->data)
            return false;

        a1 = a1->next;
        a2 = a2->next;
    }

    //revert changes to original
    reverse(middle->next);

    return true;
}


main(){

    Node* head = new Node('r');
    head -> next = new Node('a');
    head -> next -> next = new Node('d');
    head -> next -> next -> next = new Node('a');
    head -> next -> next -> next -> next = new Node('r');
    
    cout<<palindromeLL(head);
}