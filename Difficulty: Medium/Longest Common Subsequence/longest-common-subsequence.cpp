//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
  int f(int i , int j , string& s, string& t , vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=1 + f(i-1 , j-1 , s , t , dp);
        return dp[i][j]=max(f(i-1 , j , s , t , dp) , f(i , j-1 , s , t , dp));
    }
    // Function to find the length of the longest common subsequence in two strings.
    int lcs(string& s1, string& s2) {
        // your code here  
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n , vector<int>(m,-1));
        return f(n-1 , m-1 , s1 , s2 , dp);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends