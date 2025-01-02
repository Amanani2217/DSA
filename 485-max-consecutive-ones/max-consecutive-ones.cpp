class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxl = 0;
        int l = 0;
        int r = 0;
        while(l<nums.size()&&nums[l]!=1){
            l++;
        }
        r = l;
        while(r<nums.size()){
            if(l<nums.size()&&nums[l]!=1){
                l++;
                
                continue;
            }
            if(nums[r]!=1){
                l= r;
            }
            maxl = max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
};