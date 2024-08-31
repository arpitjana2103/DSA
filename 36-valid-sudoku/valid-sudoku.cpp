class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row, col;
        unordered_map<string, unordered_set<char>> box;

        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board.size(); j++){
                char ele = board[i][j];
                if(ele != '.'){
                    // Check if the ele is repeated one
                    if(row[i].count(ele)) return false;
                    if(col[j].count(ele)) return false;
                    if(box[to_string(i/3)+to_string(j/3)].count(ele)) return false;
                    
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