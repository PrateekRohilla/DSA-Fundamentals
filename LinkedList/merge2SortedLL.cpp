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

Node* mergeLL(Node* first, Node* second){
    
    //if first list have only one node
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }


    Node* curr1 = first;
    Node* next1 = first -> next;
    Node* curr2 = second;
    Node* next2 = second -> next;

    while(curr2 != NULL && next1 != NULL){
        
        if(curr2->data >= curr1->data && curr2->data <= next1->data){

            next2 = curr2 -> next;
            
            //add node in between the nodes of first list
            curr1 -> next = curr2;
            curr2 -> next = next1;

            //update links
            curr1 = curr1 -> next;
            curr2 = next2;
            
        }
        else{

            curr1 = curr1 -> next;
            
            //first list is empty - no further elements
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }

            next1 = next1 -> next;
        }

    }

    return first;
}

Node* utility(Node* first, Node* second){

    if(first == NULL)
        return second;
    if(second == NULL)
        return first;

    if(first->data <= second->data)
        return mergeLL(first, second);
    else
        return mergeLL(second, first);
}

void print(Node* list){

    if(list == NULL)
        cout<<"empty!!"<<endl;

    Node* first = list;

    while(first != NULL){
        cout<<first->data<<" ";
        first = first -> next;
    }
    cout<<endl;
}

main(){

    Node* first = new Node(1);
    first -> next = new Node(4);
    first -> next -> next = new Node(5);

    Node* second = new Node(2);
    second -> next = new Node(3);
    second -> next -> next = new Node(5);

    Node* merged = utility(first, second);

    print(merged);
}