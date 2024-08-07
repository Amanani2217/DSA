class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>v;
         //this is the brute force
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //            {v.push_back(i);
        //             v.push_back(j);
        //             break;
        //            }
        //     }
        // }

        //better sol using hash map
        map<int,int>m;
        for(int i = 0 ;i<nums.size();i++){
            int x = target - nums[i];
            if(m[x]){
            v.push_back(m[x]-1);
                v.push_back(i);
                break;
            }
            m[nums[i]]=i+1;
        }
       
    return v;
    }
};