class Solution {
public:
    int getMostFreqValue(unordered_map<char, int>& freq){
        int maxVal = 0;
        for(auto& pair:freq){
            maxVal = max(maxVal, pair.second);
        }
        return maxVal;
    }
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int fst = 0;
        int slo = 0;
        int res = 0;

        while(fst < s.size()){
            freq[s[fst]]++;

            while(((fst-slo+1) - getMostFreqValue(freq)) > k){
                freq[s[slo++]]--;
            }

            res = max(fst-slo+1, res);
            fst++;
        }

        return res;
    }
};