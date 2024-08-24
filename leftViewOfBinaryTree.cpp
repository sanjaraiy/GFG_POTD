//======================= leftViewOfBinaryTree =======================
// void solve(vector<int>&v, Node* root){
//     if(root==NULL){
//         return;
//     }
    
//     queue<Node*>q;
//     q.push(root);
    
//     while(!q.empty()){
//         int noOfNodesAtCurrentLevel = q.size();
//         int flag=false;
//         while(noOfNodesAtCurrentLevel--){
//             Node* frontNode = q.front();
//             q.pop();
//             if(!flag){
//               v.push_back(frontNode->data);
//               flag=true;
//             }
            
//             if(frontNode->left){
//                 q.push(frontNode->left);
//             }
//             if(frontNode->right){
//                 q.push(frontNode->right);
//             }
            
//         }
//     }
    
// }

// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int>v;
//    solve(v, root);
//    return v;
// }