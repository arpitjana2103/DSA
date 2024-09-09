class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lo = 0;
        int hi = n-1;
        int maxWater = 0;

        while(lo < hi){
            int x = hi - lo;
            int y = min(height[lo], height[hi]);
            int currWater = x * y;
            maxWater = max(maxWater, currWater);
            if(height[lo] < height[hi]) lo++;
            else hi--;
        }

        return maxWater;
    }
};