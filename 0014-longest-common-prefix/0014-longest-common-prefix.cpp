class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = "";

        for(int i = 0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(string str:strs){
                if(str.size() == i || str[i] != ch) return res;
            }
            res += ch;
        }

        return res;

    }
};