class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
         map<int,int>m;
        for(int i =0 ;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin();it!=m.end();){
            if(it->second>0){
             int x = it->first;
            for(int i =0;i<k;i++){
                if(m[x]>0) 
                   m[x]--;
                else
                  return false;
                x = x+1;   
            }
            }
            else{
                it++;
            }
        }
        return true;
    }
};