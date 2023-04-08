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

Node* findMid(Node* head){

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

Node* merge(Node* left, Node* right){

    if(left == NULL)
        return right;

    if(right == NULL)
        return left;

    Node* ans = new Node(-1);
    Node* temp = ans;

    //merge 2 sorted LL
    while(left != NULL && right != NULL){

        if(left->data < right->data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }

    }

    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;
    return ans;
}

Node* mergeSort(Node* head){

    if(head == NULL || head -> next == NULL)
        return head;

    Node* mid = findMid(head);

    //break LL into two halves
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    //recursive call to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left & right halves
    Node* sorted = merge(left, right);

    return sorted;
}

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

main(){

    Node* head = new Node(3);
    head -> next = new Node(2);
    head -> next -> next = new Node(6);
    head -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next = new Node(11);

    Node* sorted = mergeSort(head);

    print(sorted);

}