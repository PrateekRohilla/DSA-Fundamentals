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

bool detectLoop(Node* head){

    if(head == NULL)
        return false;

    Node* temp = head;

    map<Node*, bool> visited;

    while(temp != NULL){

        //is cycle present
        if(visited[temp] == true){
            cout<<"cycle at : "<<temp -> data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

//2nd approach - floyd's cycle detection algorithm
Node* floydDetectLoop(Node* head){
    
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast -> next;
        if(fast != NULL)
            fast = fast -> next;

        slow = slow -> next;

        if(slow == fast)
            return slow;

    }

    return NULL;
}

//where the loop starts
Node* getStartingNode(Node* head){

    if(head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);

    if(intersection == NULL)
        return NULL;

    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next; 
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL)
        return;

    Node* startOfLoop = getStartingNode(head);

    if(startOfLoop == NULL)
        return;

    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop)
        temp = temp -> next;

    temp -> next = NULL;
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

main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head -> next = a;
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = b;

    
    cout<<endl;

    //cout<<detectLoop(head);

    Node* loop = getStartingNode(head);
    cout<<"loop starts at : "<<loop -> data<<endl;
    
    cout<<endl;

    removeLoop(head);

    print(head);
}   