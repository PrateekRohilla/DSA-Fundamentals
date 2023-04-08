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

void insertAtTail(Node* &head, Node* &tail, int val){

    Node* temp = new Node(val);

    //empty list
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }

    tail -> next = temp;
    tail = tail -> next;
}   

Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){

        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node* add(Node* first, Node* second){

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    int carry = 0;

    while(first != NULL || second != NULL || carry != 0){

        int val1 = 0;
        if(first != NULL)
            val1 = first -> data;
        
        int val2 = 0;
        if(second != NULL)
            val2 = second -> data;

        int sum = val1 + val2 + carry;

        int digit = sum % 10;

        //create node and add in answer LL
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;

        if(first != NULL)
            first = first -> next;

        if(second != NULL)
            second = second -> next;

    }

    return ansHead;
}


Node* addTwoList(Node* first, Node* second){

    //step 1 : reverse input LL
    first = reverse(first);
    second = reverse(second);

    //step 2 : add 2 LL
    Node* ans = add(first, second);

    //step 3 : reverse generated list
    ans = reverse(ans);

    return ans;
}

main(){

    Node* list1 = new Node(9);
    list1 -> next = new Node(9);

    Node* list2 = new Node(1);
    list2 -> next = new Node(4);
    list2 -> next -> next = new Node(5);

    Node* ans = addTwoList(list1, list2);

    print(ans);
}