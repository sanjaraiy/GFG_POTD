//===================== Shortest path in Undirected Graph =======================
//  vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
//         // code here
//         vector<int> adj[N];  
//         vector<int> dist(N,1e9);
        
//         for(int i=0;i<M;i++){
//             adj[edges[i][0]].push_back(edges[i][1]);
//             adj[edges[i][1]].push_back(edges[i][0]);
            
//         }
        
//         queue<pair<int,int>> q;
//         q.push({0,src}); //cost,src
//         dist[src]=0;
        
//         while(!q.empty()){
//             auto z=q.front();
//             q.pop();
        
//             int cc=z.first;
//             int ss=z.second;
            
//             for(auto k:adj[ss]){
//                 if(dist[k]>(cc+1)){
//                     dist[k]=cc+1;
//                     q.push({cc+1,k});
//                 }
                    
//             }
            
//         }
        
//         for(int i=0;i<N;i++){
//             if(dist[i]==1e9)
//                 dist[i]=-1;
//         }
        
        
        
      
//         return dist;
//     }
