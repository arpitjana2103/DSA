class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int slow = 0;
        int fast = 0;
        int res = 0;

        unordered_set<char> subStr;

        while(fast < s.size()){
            char currChar = s.at(fast);

            while(subStr.count(currChar)){
                subStr.erase(s.at(slow++));
            }

            res = max(res, fast-slow+1);
            subStr.insert(s.at(fast));

            fast++;
        }

        return res;
    }
};