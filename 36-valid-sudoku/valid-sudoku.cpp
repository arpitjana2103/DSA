class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row, col;
        unordered_map<string, unordered_set<char>> box;

        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board.size(); j++){
                char ele = board[i][j];
                if(ele != '.'){
                    if(ele == '3'){
                        cout << i << " " << j << endl;
                    }
                    // Check if the ele is repeated one
                    if(row[i].count(ele)) {
                        cout << "row";
                        return false;
                    }
                    if(col[j].count(ele)) {
                        cout << "col";
                        return false;
                    }
                    if(box[to_string(i/3)+to_string(j/3)].count(ele)) {
                        cout << "box";
                        return false;
                    }
                    
                    // Save the ele
                    row[i].insert(ele);
                    col[j].insert(ele);
                    box[to_string(i/3)+to_string(j/3)].insert(ele);
                }
            }
        }
        return true;
    }
};