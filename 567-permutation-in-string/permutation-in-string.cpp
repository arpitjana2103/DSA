class Solution {
public:
    // BRUTE FORCE
        // Check Every SubStr of S2
            // If subStr.length == s1.length
                // Match if subStr contains all chars of s1
                    // if Yes return True
        // Return False
    
    bool match(unordered_map<char, int>& mp1, unordered_map<char, int>& mp2){
        if(mp1.size() == mp2.size()){
            for(auto& pair:mp1){
                char ch = pair.first;
                int countAtmp1 = pair.second;
                int countAtmp2 = mp2[ch];
                if(countAtmp1 != countAtmp2) return false;
            }
            return true;
        }else{
            return false;
        }
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int slow = 0;
        int fast = s1.size()-1;

        unordered_map<char, int> mp1;
        unordered_map<char, int> subStr;

        // Create mp1 from s1
        for(int i = slow; i<=fast; i++) mp1[s1[i]]++;

        // First SubStr of s2
        for(int i = slow; i<=fast; i++) subStr[s2[i]]++;

        // Check for First SubStr
        if(match(mp1, subStr)) return true; 

        // Check for Other SubStrs
        slow++;
        fast++;

        while(fast < s2.size()){
            // Update SubStr
            subStr[s2[fast]]++;
            subStr[s2[slow-1]]--;

            if(subStr[s2[slow-1]] == 0) 
                subStr.erase(s2[slow-1]);

            if(match(mp1, subStr)) return true;

            slow++;
            fast++;
        }

        return false;
    }
};