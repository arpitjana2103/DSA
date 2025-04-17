class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for(int i = 0; i<s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        for(auto& pair:sMap){
            char ch = pair.first;
            int count = pair.second;
            if(tMap[ch] != count) return false;
        }

        return true;
    }
};