class Solution {
private:
    void dfs(vector<int>& visited, vector<vector<int>>& nums, int start) {
        for (int j = 0; j < nums[start].size(); j++) {
            if (nums[start][j] == 1 && start != j) {
                if (visited[j] == 0) {
                    visited[j] = 1;
                    dfs(visited, nums, j);
                }
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& nums) {
        int V = nums.size(); 
        vector<int> visited(V, 0); // Use a vector for visited
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (visited[i] == 0) {
                visited[i] = 1;
                dfs(visited, nums, i);
                count++;
            }
        }
        return count;
    }
};
