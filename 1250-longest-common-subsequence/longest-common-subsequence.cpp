class Solution {
public:
int help(string &s1,string &s2,int l1,int l2,vector<vector<int>>&dp){
    if(l1<0||l2<0)
       return 0;
    if(dp[l1][l2]!=-1)
      return dp[l1][l2];   
    if(s1[l1]==s2[l2])
      return dp[l1][l2] = 1 + help(s1,s2,l1-1,l2-1,dp);
    return dp[l1][l2]= max(help(s1,s2,l1-1,l2,dp),help(s1,s2,l1,l2-1,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        // i got tle now add memoization
        
        int ind1 = text1.length()-1;
        int ind2 = text2.length()-1;
        vector<vector<int>>dp(ind1+2,vector<int>(ind2+2,-1));
       return  help(text1,text2,ind1,ind2,dp);
    }
};