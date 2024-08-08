class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<long,pair<int,int>>>pq;//max heap
        for(int i = 0 ;i<arr.size();i++){
            pq.push({(pow(arr[i][0],2)+pow(arr[i][1],2)),{arr[i][0],arr[i][1]}});
            if(pq.size()>k)
              pq.pop();
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};