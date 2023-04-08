#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){

    int data;
    cout<<"Enter data : ";
    cin>>data;

    root = new node(data);

    if(data == -1)
        return NULL;

    cout<<"Enter data inserting in left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data inserting in right of "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;
}

void preOrder(node* root, int &count){

    if(root == NULL)
        return;
    
    //leaf node
    if(root -> left == NULL && root -> right == NULL)
        count++;

    preOrder(root -> left, count);
    preOrder(root -> right, count);
}

int countLeafNodes(node* root){

    int count = 0;

    preOrder(root, count);

    return count;
}

main(){


    node* root = NULL;

    root = buildTree(root);

    cout<<endl<<endl;

    int leafs = countLeafNodes(root);

    cout<<"Leaf nodes : "<<leafs<<endl;

}