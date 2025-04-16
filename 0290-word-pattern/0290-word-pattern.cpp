class Solution {
public:
    string getNextSt(string s, int &ptr){
        string res = "";
        while(ptr < s.size()){
            if(s[ptr] == ' ') {
                ptr++;
                break;
            };
            res += s[ptr];
            ptr++;
        }
        return res;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> STC;
        unordered_map<char, string> CTS;

        int ptr = 0;
        for(int i = 0; i<pattern.size(); i++){
            char ch = pattern[i];
            string st = getNextSt(s, ptr);

            // If no more str for a ch return false;
            if(st == "") return false;

            if(CTS.count(ch)){
                // Match
                if(CTS[ch] != st) return false;
            }else{
                CTS[ch] = st;
            }
            
            if(STC.count(st)){
                // Match
                if(STC[st] != ch) return false;
            }else{
                STC[st] = ch;
            }
        }

        // if more str present return false;
        if(ptr < s.size()) return false;

        return true;
    }
};