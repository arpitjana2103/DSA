class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex + 1;
        vector<int> res(n, 0);
        res[0] = 1;

        for(int i = 2; i<=n; i++){
            int prev = res[0];
            for(int j = 1; j<i; j++){
                int temp = res[j];
                res[j] = res[j] + prev;
                prev = temp;
            }
        }

        return res;
    }
};