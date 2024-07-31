class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int odd = 0 ;
        int l=0;
        int r =0;
        int count = 0 ;
        int n = nums.size();
        while(r<n){
         if(nums[r]%2==1){
                odd++;
            }
         while(odd==k){
               count++;
               int x = r+1;
               
               while(x<n&&nums[x]%2==0){
                    count++;
                    x++;
               }
               //count+=(n-r-1);
               if(nums[l]%2==1)
                 odd--;
                l++;
            }
          
            r++;
        }
        return count;
    }
};