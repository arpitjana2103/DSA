class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;

        for(char ch:s){
            if(!st.empty() && st.back().first == ch){
               st.back().second++;
            }else{
               st.push_back(make_pair(ch, 1)); 
            }

            if(st.back().second == k) st.pop_back();
        }


        // Building res
        string res;

        for(auto& pair:st){
            char ch = pair.first;
            int count = pair.second;

            for(int i = 0; i<count; i++){
                res += ch;
            }
        }

        return res;
    }
};