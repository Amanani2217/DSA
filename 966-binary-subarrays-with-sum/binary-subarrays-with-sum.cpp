class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count=0;
        int sum =0 ;
        if(goal==0){
            while(r<n ){
                if(nums[r]==0){
                    l=r;
                    while(r<n&&nums[r]==0){
                        
                        r++;
                    }
                    count+=((r-l)*(r-l+1)/2);

                }
                r++;
            }
           // count++;
            return count;
        }
        while(r<n){
            sum+=nums[r];
            while(sum==goal){
                count++;
                int x = r+1;
                while(x<n&&nums[x]==0)
                  {
                    count++;
                    x++;
                  }
                if(l<n&&nums[l]==1)
                  sum-=1; 
                l++;   
            }
            r++;
        }
        return count;
    }
};