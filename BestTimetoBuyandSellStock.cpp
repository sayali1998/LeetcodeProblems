class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // We use 2 pointer approach for this, Left pointer will point to mininum value and the right will point to the max value
        int left = 0, right = 1, max_profit = 0, profit = 0;
        while(right<prices.size()){
            if(prices[left] < prices[right]){
                // We check profit for every value/day
                profit = prices[right]-prices[left];
                max_profit =  (max_profit< profit)? profit : max_profit;
                right = right + 1;
            }
            else{
                // We move left to right as we find a smaller value than the one that we have
                left = right;
                right = right + 1;
            }
        }
        return max_profit;
    }
};