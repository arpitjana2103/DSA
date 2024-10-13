class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res = {{1}};

       for(int i = 1; i<numRows; i++){

        vector<int> lastRow = res[res.size()-1];
        lastRow.push_back(0);

        vector<int> newRow(lastRow.size());
        newRow[0] = 1;

        for(int i = 1; i<lastRow.size(); i++){
            newRow[i] = lastRow[i-1]+lastRow[i];
        }
        res.push_back(newRow);
       } 

       return res;
    }
};