class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0 ;
        if(nums[0]<nums[nums.size()-1]){
            for(int i=1;i<nums.size();i++){
               if(nums[i]<nums[i-1])
                 return false;
            }
            return true;
        }else{
            for(int i =1;i<nums.size();i++){
                if(nums[i]<nums[i-1]){
                    count++;
                }
                if(count>1)
                   return false;
            }
            return true;
        }
    }
};