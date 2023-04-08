

// recursive - more space used
bool searchInBST(Node* root, int x){

    if(root == NULL)
        return false;

    if(root -> data == x)
        return true;

    if(root -> data > x)
        return searchInBST(root->left, x);
    else
        return searchInBST(root->right, x);

}

// iterative - less space used
// TC - O(h)  h is height of tree
// TC - O(n) skewed tree -- worst case 
bool searchInBST(Node* root, int x){

    Node* temp = root;

    while(temp != NULL){

        if(temp -> data == x)
            return true;
        
        if(temp->data > x)
            temp = temp -> left;
        else
            temp = temp -> right;
    }

    return false;
}




    cout<<endl<<"-------"<<endl;
    cout<<searchInBST(root, 3)<<endl<<endl;
    cout<<searchInBST(root, 12)<<endl<<endl;