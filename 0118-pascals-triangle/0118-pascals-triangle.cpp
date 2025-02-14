class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res = {{1}};

        for(int i = 2; i<=numRows; i++){
            vector<int> prevRow = res[res.size()-1];
            prevRow.push_back(0);
            vector<int> ithRow = {1};

            for(int j = 0; j<prevRow.size()-1; j++){
                ithRow.push_back(prevRow[j] + prevRow[j+1]);
            }

            res.push_back(ithRow);
        }

        return res;
    }
};