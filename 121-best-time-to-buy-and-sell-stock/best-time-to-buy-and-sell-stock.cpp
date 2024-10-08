class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min = arr[0];
        int profit = 0 ;
        for(int i= 1;i<arr.size();i++){
            if(arr[i]-min>profit)
               profit = arr[i]-min;
            if(min>arr[i])
               min = arr[i];   
        }
         return profit;
    }
};