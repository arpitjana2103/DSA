class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), total = 0;
        vector<int> lMax(n, 0), rMax(n, 0);
        int lMaxHeight = INT_MIN, rMaxHeight = INT_MIN;

        for(int i = 0, j = n-1; i < n && j >= 0; i++, j--){
            lMaxHeight = max(lMaxHeight, height[i]);
            lMax[i] = lMaxHeight;

            rMaxHeight = max(rMaxHeight, height[j]);
            rMax[j] = rMaxHeight;
        }

        for(int i = 0; i<n; i++){
            total += min(lMax[i], rMax[i]) - height[i];
        }

        return total;
    }
};