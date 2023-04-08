void predecessorSuccessor(Node* root, int key, Node* &pre, Node* &suc){

    if(root == NULL)
        return;

    //if key is present at root
    if(root->data == key){

        //max value in left subtree is predecessor
        if(root->left != NULL){
            Node* temp = root -> left;
            while(temp->right)
                temp = temp -> right;
            
            pre = temp;
        }
        
        //min value in right subtree is successor
        if(root->right != NULL){
            Node* temp = root -> right;
            while(temp->left)
                temp = temp -> left;

            suc = temp;
        }

        return;
    }

    //if key is smaller than root's data, go to left subtree
    if(root->data > key){
        suc = root;
        predecessorSuccessor(root->left, key, pre, suc);
    }

    //go to right subtree
    else{
        pre = root;
        predecessorSuccessor(root->right, key, pre, suc);
    }

}





    cout<<endl<<" --- "<<endl;
    
    Node* pre;
    Node* suc;

    predecessorSuccessor(root, 7, pre, suc);
    cout<<"predecessor : "<<pre->data<<endl;
    cout<<"successor : "<<suc->data<<endl;
