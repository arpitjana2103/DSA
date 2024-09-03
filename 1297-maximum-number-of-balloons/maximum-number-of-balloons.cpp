class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count = INT_MAX;
        string word = "balloon";
        unordered_map<char, int> word_map, text_map;

        for(char ch:word) word_map[ch]++;
        for(char ch:text) text_map[ch]++;

        for(auto& pair:word_map){
            char ch = pair.first;
            int chCountInWord = pair.second;
            int chCountInText = text_map[ch];
            count = min(count, chCountInText/chCountInWord);
        }

        return count;
    }
};