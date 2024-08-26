class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lMaxArr(n);
        vector<int> rMaxArr(n);
        int totalWater = 0;

        lMaxArr[0] = height[0];
        rMaxArr[n-1] = height[n-1];

        for(int i = 1; i<n; i++){
            lMaxArr[i] = max(height[i], lMaxArr[i-1]);
        }

        for(int i = n-2; i>=0; i--){
            rMaxArr[i] = max(height[i], rMaxArr[i+1]);
        }

        for(int i = 0; i<n; i++){
            totalWater += min(lMaxArr[i], rMaxArr[i]) - height[i];
        }

        return totalWater;
    }
};