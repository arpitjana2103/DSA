class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res = "";
        
        for(int i = 0; i<strs.at(0).size(); i++){
            char ch = strs.at(0).at(i);
            for(string str:strs){
                if(str.size() == i || ch != str.at(i))
                    return res;
            }
            res += ch;
        }

        return res;
    }
};