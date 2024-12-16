class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>m;
       vector<int>v;
       for(int i =0;i<nums.size();i++){
         int x = target -nums[i];
         if(m[x]){
            v.push_back(m[x]-1);
            v.push_back(i);
            break;
         }
         m[nums[i]] = i+1;
       }
       return v;
    }
};