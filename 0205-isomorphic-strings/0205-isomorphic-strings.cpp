class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, char> ST, TS;

        for(int i = 0; i<s.size(); i++){

            char tCh = t[i];
            char sCh = s[i];

            if(ST.count(sCh)){
                if(tCh != ST.at(sCh)) return false;
            }

            if(TS.count(tCh)){
                if(sCh != TS.at(tCh)) return false;
            }

            ST[sCh] = tCh;
            TS[tCh] = sCh;
        }

        return true;
    }
};