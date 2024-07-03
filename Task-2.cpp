class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) { // to check current price is lesser than buying price
                buy = prices[i];
            } else if (prices[i] - buy > profit) { // to check maximum profit
                profit = prices[i] - buy;
            }
        }
        return profit; // return maximum profit
    }
};
//Time complexity: O(n) and Space complexity: O(1)