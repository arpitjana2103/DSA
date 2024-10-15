class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int rowSize = rowIndex + 1;
        vector<int> row(rowSize, 0);

        row[0] = 1;

        for(int i = 1; i<=rowIndex; i++){
            int currRowSize = i+1;
            int prev = row[0];
            for(int j = 1; j<currRowSize; j++){
                int curr = row[j];
                row[j] = curr + prev;
                prev = curr;
            }
        }

        return row;
    }
};