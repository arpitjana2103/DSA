class Solution {
public:
    string getKey(string& s){
        string keyVector(26, 0);

        for(char& ch:s){
            keyVector[ch - 'a']++;
        }

        string res = "";

        for(int freq:keyVector){
            res += (to_string(freq) + "|");
        }
        
        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;

        for(string& s:strs){
            string key = getKey(s);
            if(anagram_map.count(key)){
                anagram_map[key].push_back(s);
            }else{
                anagram_map[key] = {s};
            }
        }

        vector<vector<string>> res;
        for(auto& pair:anagram_map){
            res.push_back(pair.second);
        }

        return res;
    }
};