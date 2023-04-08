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
    cout<<"Enter data:"<<endl;
    cin>>data;

    root = new node(data);

    if(data == -1)
        return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);

    //seperator - just for formatted printing
    q.push(NULL);

    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();

        //indicates old level is completely traversed
        if(temp == NULL){
            cout<<endl;

            //queue still has some child nodes
            if(!q.empty())
                q.push(NULL);
        }

        else{
            
            cout<<temp -> data<<" ";

            if(temp -> left)
                q.push(temp -> left);

            if(temp -> right)
                q.push(temp -> right);

        }

    }

}

void preorder(node* root){

    if(root == NULL)
        return;
    
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(node* root){

    if(root == NULL)
        return;
    
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}

void postorder(node* root){

    if(root == NULL)
        return;
    
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}

void buildFromLevelOrder(node* &root){

    queue<node*> q;

    int data;
    cout<<"Enter data for root : "<<endl;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        int leftData;
        cout<<"Enter left node for "<<temp -> data<<endl;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);    
        }

        int rightData;
        cout<<"Enter right node for "<<temp -> data<<endl;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);    
        }
    }

}

main(){

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    node* root = NULL;

    /*
    root = buildTree(root);
    
    cout<<endl<<endl;

    cout<<"level order traversal :"<<endl;
    levelOrderTraversal(root);

    cout<<endl<<endl;

    cout<<"inorder traversal : ";
    inorder(root);

    cout<<endl<<endl;

    cout<<"preorder traversal : ";
    preorder(root);

    cout<<endl<<endl;

    cout<<"postorder traversal : ";
    postorder(root);
    */

   buildFromLevelOrder(root);
   
   cout<<endl;

   levelOrderTraversal(root);

}