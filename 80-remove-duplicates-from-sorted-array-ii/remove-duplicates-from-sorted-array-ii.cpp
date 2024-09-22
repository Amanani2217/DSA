class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size() ;int k =0;
        for(int i=2;i<nums.size();i++){
               if(nums[i]==nums[i-1]&&nums[i-1]==nums[i-2]){
                     k++;
                     nums.erase(nums.begin()+i);
                     i--;
               }
        }
        return size-k;
    }
};