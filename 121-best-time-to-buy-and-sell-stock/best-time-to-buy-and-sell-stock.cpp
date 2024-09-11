class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = INT_MAX;
        int maxProfit = 0;

        for(int price:prices){
            minStock = min(minStock, price);
            maxProfit = max(maxProfit, price-minStock);
        }

        return maxProfit;
    }
};