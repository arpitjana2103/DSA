class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int res = INT_MIN;
        int minStock = prices[0];

        for(int i = 1; i<prices.size(); i++){
            res = max(res, prices[i] - minStock);
            minStock = min(minStock, prices[i]);
        }

        if(res < 0) return 0;
        return res;
    }
};