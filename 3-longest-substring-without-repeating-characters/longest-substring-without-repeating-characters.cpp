class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int slo = 0;
        int fst = 0;
        int res = 0;

        unordered_set<char> subStr;

        while(fst < s.size()){
            char currChar = s.at(fst);

            while(subStr.count(currChar)){
                subStr.erase(s.at(slo++));
            }

            subStr.insert(s.at(fst));
            res = max(res, static_cast<int>(subStr.size()));

            fst++;
        }

        return res;
    }
};