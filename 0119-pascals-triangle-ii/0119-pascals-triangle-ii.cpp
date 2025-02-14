class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res = {1};
        int prev = 0;

        for(int i=1; i<=rowIndex; i++){
            res.push_back(0);
            int prev = res[0];
            for(int j=1; j<=i; j++){
                int temp = res[j];
                res[j] = res[j] + prev;
                prev = temp;
            }
        }

        return res;
    }
};