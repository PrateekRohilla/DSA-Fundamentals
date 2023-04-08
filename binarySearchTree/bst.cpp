#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

// TC - O(h)  h is height of tree -- average case
// TC - O(n) skewed tree -- worst case 
Node* insertIntoBST(Node* root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    //insert into right part
    if(d > root -> data)
        root -> right = insertIntoBST(root -> right, d);

    //insert into left part
    else
        root -> left = insertIntoBST(root -> left, d);

    return root;
}

void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);

    //seperator - just for formatted printing
    q.push(NULL);

    while(!q.empty()){
        
        Node* temp = q.front();
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

void preorder(Node* root){

    if(root == NULL)
        return;
    
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

Node* minValue(Node* root){

    Node* temp = root;

    while(temp->left != NULL)
        temp = temp -> left;

    return temp;
}

//TC - O(h) for average | O(n) for worst(skewed)
Node* deleteFromBST(Node* root, int val){

    if(root == NULL)
        return root;

    if(root->data == val){

        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child - left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        //1 child - right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;   
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root->right, mini);
            return root;
        }

    }

    //go to left part
    else if(root->data > val){
        root -> left = deleteFromBST(root->left, val);
        return root;
    }

    //go to right part
    else{
        root -> right = deleteFromBST(root->right, val);
        return root;
    }

}

main(){

    // 10 8 21 7 27 5 4 3 -1
    // 50 20 70 10 30 90 110 -1

    Node* root = NULL;

    cout<<"Enter data to create BST : "<<endl;
    takeInput(root);

    cout<<endl<<endl<<"printing BST : "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<endl<<"printing preorder : "<<endl;
    preorder(root);


    //node deletion
    root = deleteFromBST(root, 50);

    cout<<endl<<endl<<"printing BST : "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<endl<<"printing preorder : "<<endl;
    preorder(root);


    
}