class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res = {{1}};

       for(int i = 1; i<numRows; i++){

        vector<int> lastRow = res[res.size()-1];
        vector<int> newRow;
        int prev = 0;

        for(int i = 0; i<lastRow.size(); i++){
            newRow.push_back(prev + lastRow[i]);
            prev = lastRow[i];
        }

        newRow.push_back(1);
        res.push_back(newRow);
       } 

       return res;
    }
};