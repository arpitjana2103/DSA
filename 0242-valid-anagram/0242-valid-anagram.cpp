class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> smp, tmp;

        for(char ch:s){
            smp[ch]++;
        }

        for(char ch:t){
            tmp[ch]++;
        }

        for(auto &pair:smp){
            int sCount = pair.second;
            int tCount = tmp[pair.first];

            if(sCount != tCount) return false;
        }

        return true;
    }
};