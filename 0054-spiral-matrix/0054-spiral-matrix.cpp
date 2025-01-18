class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int R = matrix.size();
        int C = matrix[0].size();

        int t = 0;
        int b = R-1;
        int l = 0;
        int r = C-1;

        while(t<=b && l<=r){
            // left to right
            for(int i = l; i<=r; i++){
                res.push_back(matrix[t][i]);
            }
            t++;

            // top to bottom
            for(int i = t; i<=b; i++){
                res.push_back(matrix[i][r]);
            }
            r--;

            // Condition Recheck
            if(t > b || l > r) break;

            // right to left
            for(int i = r; i>=l; i--){
                res.push_back(matrix[b][i]);
            }
            b--;

            // Condition Recheck
            if(t > b || l > r) break;

            // bottom to top
            for(int i = b; i>=t; i--){
                res.push_back(matrix[i][l]);
            }
            l++;
        }

        return res;

    }
};