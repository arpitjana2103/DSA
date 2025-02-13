class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = INT_MAX;
        int maxProfit = INT_MIN;
        for(int i = 0; i<prices.size(); i++){
            minStock = min(prices[i], minStock);
            maxProfit = max(maxProfit, prices[i] - minStock);
        }
        return maxProfit;
    }
};