class Solution {
public:
    bool match(unordered_map<char, int> s1map, unordered_map<char, int> s2map){

        for(auto& pair:s1map){
            char ch = pair.first;
            int count = pair.second;

            if(s2map[ch] != count) return false;
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        int slo = 0;
        int fst = s1.size()-1;

        unordered_map<char, int> s1map, s2map;
        for(int i = slo; i<=fst; i++){
            s1map[s1[i]]++;
            s2map[s2[i]]++;
        }

        slo++;
        fst++;

        while(fst < s2.size()){
            if(match(s1map, s2map)) 
                return true;

            s2map[s2[slo-1]]--;
            s2map[s2[fst]]++;

            if(s2map[s2[slo-1]] == 0) 
                s2map.erase(s2[slo-1]);

            fst++;
            slo++;
        }

        if(match(s1map, s2map)) 
            return true;

        return false;
    }
};