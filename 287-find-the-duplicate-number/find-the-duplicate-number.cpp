class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());int x = 0 ;
        for(int i =1 ;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                 x =  nums[i];
                 break;
            }
              
        }
        return x; 
    }
};