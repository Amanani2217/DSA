//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    private:
      void dfs(vector<int>&visited,int start, vector<int>adjls[]){
          for(auto it:adjls[start]){
              if(visited[it]==0){
                  visited[it]=1;
                  dfs(visited,it,adjls);
              }
          }
      }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        // change this mat in to adjLS 
        vector<int>adjls[V];
        for(int i=0 ;i<V;i++){
            for(int j =0 ;j<V;j++){
                if(adj[i][j]==1&&i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int count =0  ;
        vector<int>visited(V,0);
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                visited[i]=1;
                count++;
                dfs(visited,i,adjls);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends