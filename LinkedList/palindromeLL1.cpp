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

bool checkPalindrome(vector<char> arr){

    int s = 0;
    int e = arr.size()-1;

    while(s <= e){
        if(arr[s] != arr[e])
            return false;
        s++;e--;
    }

    return true;
}   

bool palindromeLL(Node* head){

    vector<char> arr;

    Node* temp = head;

    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp -> next;
    }

    return checkPalindrome(arr);

}


main(){

    Node* head = new Node('a');
    head -> next = new Node('a');
    head -> next -> next = new Node('d');
    head -> next -> next -> next = new Node('a');
    head -> next -> next -> next -> next = new Node('a');

    cout<<palindromeLL(head);
}