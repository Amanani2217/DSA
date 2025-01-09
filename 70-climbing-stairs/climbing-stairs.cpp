class Solution {
public:
int help(int sum,int n,int dp[]){
    if(sum==n){
        return 1;
    }
    if(sum>n){
        return 0;
    }
    if(dp[sum]!=0)
      return dp[sum];
   dp[sum] =  help(sum+1,n,dp) + help(sum+2,n,dp);
   return dp[sum];
}
int help2(int n,vector<int>&dp){
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=0)return dp[n];
    dp[n] = help2(n-1,dp)+help2(n-2,dp);
    return dp[n];
}
    int climbStairs(int n) {
     vector<int>dp(n+1,0);
      return help2(n,dp); 
    }
};