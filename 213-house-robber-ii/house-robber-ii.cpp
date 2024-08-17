class Solution {
public:
int help(vector<int>nums,int n ,int dp[]){
    if(n==0)
      return nums[n];
    if(n<0)
      return 0;
    if(dp[n]!=-1)
      return dp[n];
    int incd = help(nums,n-2,dp)+nums[n];
    int excd = help(nums,n-1,dp)+0;
    dp[n]= max(incd,excd);
    return dp[n];
}
    int rob(vector<int>& nums) {
         int n = nums.size();
        if(n==1)
          return nums[0];
       
        int dp[n];
        for(int i =0 ;i<n;i++)
           dp[i]= -1;
        vector<int>temp;
        for(int i = 0;i<n-1;i++)
          temp.push_back(nums[i]);
       int x  =  help(temp,n-2,dp); //including first element and excluding last



       vector<int>temp2;
       int dp2[n];
        for(int i =0 ;i<n;i++)
           dp2[i]= -1;
       for(int i =1;i<nums.size();i++)
           temp2.push_back(nums[i]);
       int y = help(temp2,n-2,dp2);//including last element and excluding first
       return max(x,y);
    }
};