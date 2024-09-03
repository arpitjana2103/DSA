class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string word = "balloon";

        unordered_map<char, int> word_map, text_map;

        for(char ch:word){
            if(word_map.count(ch)){
                word_map[ch]++;
            }else{
                word_map[ch] = 1;
            }
        }

        for(char ch:text){
            if(word_map.count(ch)){
                if(text_map.count(ch)){
                    text_map[ch]++;
                }else{
                    text_map[ch] = 1;
                }
            }
        }

        int count = INT_MAX;

        for(auto& pair:word_map){
            char ch = pair.first;
            int chCountInWord = pair.second;
            int chCountInText = text_map[ch];
            
            count = min(count, chCountInText/chCountInWord);
        }

        return count;
    }
};