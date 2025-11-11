class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        vector<int> res(26, 0);

        for(char ch: s)
            res[ch - 'a']++;

        for(char ch: t)
            res[ch - 'a']--;
        
        for(int count: res){
            if(count > 0) return false;
        }

        return true;
        
    }
};