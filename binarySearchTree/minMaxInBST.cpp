//left most node is min value in BST
Node* minValue(Node* root){

    Node* temp = root;

    while(temp->left != NULL)
        temp = temp -> left;

    return temp;
}

//right most node is max value in BST
Node* maxValue(Node* root){

    Node* temp = root;

    while(temp->right != NULL)
        temp = temp -> right;

    return temp;
}


//input 50 20 70 10 30 90 110 -1

    cout<<endl<<" ---- "<<endl;
    Node* min = minValue(root);
    Node* max = maxValue(root);

    cout<<"min : "<<min->data<<endl;
    cout<<"max : "<<max->data<<endl;
