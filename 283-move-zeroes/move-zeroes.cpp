class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k =0 ;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]==0)
              {
                k++;
                nums.erase(nums.begin()+i);
                i--;
              }
        }
        
        int i = nums.size();
        while(k--){
           nums.push_back(0);
           i++;
        }
    }
};