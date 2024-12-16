class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit =0 ;
        for(auto price:prices){
            profit = max(profit,price-buy);
            if(price<buy)
               buy = price;
        }
        return profit;
    }
};