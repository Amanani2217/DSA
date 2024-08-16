class Solution {
public:
int help(vector<int>nums,int n ,int dp[] ){
    if(n==0)
      return nums[n] ;
    if(n<0)
      return 0;  
    if(dp[n]!=-1)
      return dp[n];
      int incd = help(nums,n-2,dp)+nums[n]  ;
      int excd = help(nums,n-1,dp)+0;
    dp[n] = max(incd , excd);
    return dp[n];
}
    int rob(vector<int>& nums) {
        int dp[nums.size()+1];
        for(int i = 0;i<=nums.size();i++)
           dp[i]=-1;
        return help(nums,nums.size()-1,dp);
    }
};