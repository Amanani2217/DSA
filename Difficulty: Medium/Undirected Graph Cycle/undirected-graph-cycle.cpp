//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    bool help(int * visited,vector<vector<int>>& adj,int root){
        visited[root] = 1;
        int V = adj.size();
        queue<pair<int,int>>q;
        pair<int,int>t(root,-1);
        q.push(t);
        while(!q.empty()){
            t = q.front();
            q.pop();
            for(auto it:adj[t.first]){
                if(visited[it]==0){
                    visited[it]=1;
                    q.push({it,t.first});
                }
                else if(it!=t.second){
                    return true;
                }
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        // using bfs by takin queue
        int V = adj.size();
        int visited[V] = {0};
        for(int i =0 ;i<V;i++){
            if(visited[i]==0){
                if(help(visited,adj,i)==true)
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