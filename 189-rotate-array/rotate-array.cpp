class Solution {
public:
void reverse(vector<int>&nums,int i,int j){
    while(i<j){
        int t = nums[i];
        nums[i]= nums[j];
        nums[j]=t;
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(size<k){
           k=k%size;
        }
          
        reverse(nums,0,size-k-1);
        reverse(nums,size-k,size-1);
        reverse(nums,0,size-1);
    }
};