//------------------Clone an Undirected Graph-------------------
// void dfs(Node* ans,Node* node,unordered_map<int,Node*>&mp){
//         mp[ans->val]=ans;
//         for(auto x:node->neighbors){
//             if(mp.find(x->val)==mp.end()){
//                 Node* newNode= new Node(x->val);
//                 ans->neighbors.push_back(newNode);
//                 dfs(newNode,x,mp);
//             }else{
//                 ans->neighbors.push_back(mp[x->val]);
//             }
//         }
//     }
//     Node* cloneGraph(Node* node) {
//         Node* ans=new Node(node->val);
//         unordered_map<int,Node*>mp;
//         dfs(ans,node,mp);
//         return ans;
//     }
