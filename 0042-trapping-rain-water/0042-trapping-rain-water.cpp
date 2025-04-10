class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lMax(n, 0), rMax(n, 0);
        int lMaxHeight = height[0];
        int rMaxHeight = height[height.size() - 1];
        
        for(int i = 0; i<n; i++){
            lMaxHeight = max(lMaxHeight, height[i]);
            lMax[i] = lMaxHeight;

            int j = n-1-i;
            rMaxHeight = max(rMaxHeight, height[j]);
            rMax[j] = rMaxHeight;
        }

        // for(int num:lMax){
        //     cout << num << ", ";
        // }
        // cout << endl;
        // for(int num:rMax){
        //     cout << num << ", ";
        // }

        int res = 0;

        for(int i = 0; i<n; i++){
            res += min(lMax[i], rMax[i]) - height[i];
        }

        return res;
    }
};