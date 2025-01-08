//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    private:
     bool dfs(vector<vector<int>>&adj,int start,int parent,int *visited){
        // visited[start] = 1; 
        visited[start] = 1;
         for(auto it : adj[start]){
             if(visited[it]==0){
                 //visited[it] = 1;
                 if(dfs(adj,it,start,visited)==true)
                     return true;
             }
            else if(it!=parent)
               return true;
             
         }
         return false;
     }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        int visited[V] = {0};
        
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                //visited[0]= 1;
               if(dfs(adj,i,-1,visited)==true)
                  return true; 
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends