class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp =0;
        int ans = INT_MIN;
        for(auto num:nums){
            temp+=num;
            ans = max(temp,ans);
            if(temp<0)temp=0;
        }
        return ans;
    }
};