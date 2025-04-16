class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, char> ST, TS;

        for(int i = 0; i<s.size(); i++){
           char chs = s[i];
           char cht = t[i];

           if(!ST.count(chs)) ST[chs] = cht;
           else if(ST.at(chs) != cht) return false;
        }

        for(int i = 0; i<s.size(); i++){
            char chs = s[i];
            char cht = t[i];

            if(!TS.count(cht)) TS[cht] = chs;
            else if(TS.at(cht) != chs) return false;
        }

        return true;
    }
};