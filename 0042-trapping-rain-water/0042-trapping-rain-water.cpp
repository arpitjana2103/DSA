class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmaxHeight = height.at(0);
        int rmaxHeight = height.at(n-1);

        vector<int> lmax(n, 0), rmax(n, 0);

        for(int i = 0; i<n; i++){
            int j = n-1-i;
            
            lmaxHeight = max(lmaxHeight, height[i]);
            rmaxHeight = max(rmaxHeight, height[j]);

            lmax[i] = lmaxHeight;
            rmax[j] = rmaxHeight;
        }

        int res = 0;

        for(int i = 0; i<n; i++){
            int water = min(rmax[i], lmax[i]) - height.at(i);
            res += water;
        }

        return res;
    }
};