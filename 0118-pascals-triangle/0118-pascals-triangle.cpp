class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {{1}};

        // 5
        // 2, 3, 4, 5

        for(int i = 2; i<=numRows; i++){
            vector<int> prevRow = res[res.size()-1];
            prevRow.push_back(0);

            vector<int> newRow;
            int prevEle = 0;

            for(int j = 0; j<prevRow.size(); j++){
                newRow.push_back(prevEle + prevRow[j]);
                prevEle = prevRow[j];
            }

            res.push_back(newRow);
        }

        return res;
    }
};