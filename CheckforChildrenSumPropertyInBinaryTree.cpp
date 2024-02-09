//-----------------Check for Children Sum Property in a Binary Tree------------------
 bool solve(Node *root) {
    if (root == nullptr)
        return true; // An empty tree satisfies the property
    
    // For leaf nodes, the property is already satisfied
    if (root->left == nullptr && root->right == nullptr)
        return true;
    
    int sum = 0;
    if (root->left != nullptr)
        sum += root->left->data;
    if (root->right != nullptr)
        sum += root->right->data;
    
    // Recursively check the property for left and right subtrees
    return (root->data == sum && solve(root->left) && solve(root->right));
}

int isSumProperty(Node *root) {
    if(solve(root)){
        return 1;
    }
    
    return 0;
}
