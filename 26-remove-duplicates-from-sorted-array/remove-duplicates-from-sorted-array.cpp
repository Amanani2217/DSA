class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0 ;
        int size = nums.size();
        for(int i = 1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                k++;
                nums.erase(nums.begin()+i,nums.begin()+i+1);
                i--;
            }
        }
        return size-k;
    }
};