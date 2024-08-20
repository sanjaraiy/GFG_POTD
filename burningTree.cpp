//=========================== Burning Tree ===============================
  //Perform DFS calculate the depth (distance form target) of each node
    int dfs(Node* node){
        if(!node) return 0;
        int leftDepth = dfs(node->left);
        int rightDepth = dfs(node->right);
        return 1 + max(leftDepth, rightDepth);
    }
    
    int solve(Node* node, int target, int &ans){
        if(!node){
            return -1;
        }
        
        //If target node is found
        if(node->data==target){
            int leftSide = dfs(node->left);
            int rightSide = dfs(node->right);
            ans=max(leftSide, rightSide);
            return 1;
        }
        
        //Search for the target in the left subtree
        int leftDist = solve(node->left, target, ans);
        if(leftDist!=-1){
            int rightSide=dfs(node->right);
            ans = max(ans, leftDist + rightSide);
            return 1 + leftDist;
        }
        
        //Search for the target in the right subtree
        int rightDist = solve(node->right, target, ans);
        if(rightDist!=-1){
            int leftSide = dfs(node->left);
            ans = max(ans, rightDist + leftSide);
            return 1+rightDist;
        }
        return -1;
    }
    
    int minTime(Node* root, int target) 
    {
       int ans=0;
       solve(root, target, ans);
       return ans;
       
        
    }