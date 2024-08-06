class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0 ;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k)
               pq.pop();
             
            // else{
            //     while(!st.empty()&&st.top()<nums[i]){
            //         st2.push(st.top());
            //         st.pop();
            //     }
            //     st.push(nums[i]);
            //     while(!st2.empty()){
            //         st.push(st2.top());
            //         st2.pop();
            //     }
            // }   
        }
        if(pq.size()>k)
          pq.pop();
        return pq.top();
    }
};