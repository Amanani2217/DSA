class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int temp =0  ;int max = 0 ;
       for(int i =0 ;i<nums.size();i++){
        if(nums[i]==1)
          temp++;
        else{
            temp =0 ;
        }
        if(temp>max)
          max = temp;
       }
       return max;
    }
};