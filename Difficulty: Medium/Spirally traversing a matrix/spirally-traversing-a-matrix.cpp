//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &m) {
    int i = 0;  
    int j = 0;  
    int r = m.size();  
    int c = m[0].size();  
    vector<int> ans;

    while (i < r && j < c) {
        
        for (int k = j; k < c; k++) {
            ans.push_back(m[i][k]);
        }
        i++;  

        
        for (int k = i; k < r; k++) {
            ans.push_back(m[k][c - 1]);
        }
        c--;   
       
        if (i < r) {
            for (int k = c - 1; k >= j; k--) {
                ans.push_back(m[r - 1][k]);
            }
            r--;   
        }

         
        if (j < c) {
            for (int k = r - 1; k >= i; k--) {
                ans.push_back(m[k][j]);
            }
            j++;  
        }
    }

    return ans;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends