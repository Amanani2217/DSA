class Solution {
public:

    int maxProfit(vector<int>& nums) {
        //help(prices,0);
        int profit =0 ;
        for(int i=0 ;i<nums.size();i++){
            int j = i+1;
             while(j<nums.size()&&nums[j]>=nums[j-1]){
                j++;
             }
             profit = profit +(nums[j-1]-nums[i]);
             i=j-1;
        }
        return profit;
    }
};