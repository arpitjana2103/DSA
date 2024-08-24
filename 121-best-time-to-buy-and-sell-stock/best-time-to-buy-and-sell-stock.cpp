class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = INT_MAX;
        int maxProfit = INT_MIN;

        for(int num:prices){
            minStock = min(minStock, num);
            maxProfit = max(num-minStock, maxProfit);
        }

        return maxProfit;
    }
};