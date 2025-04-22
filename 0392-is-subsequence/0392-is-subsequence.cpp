class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptrS = 0;
        int ptrT = 0;

        while(ptrT < t.size() && ptrS < s.size()){
            if(t[ptrT] == s[ptrS]){
                ptrT++;
                ptrS++;
            }else{
                ptrT++;
            }
        }

        return ptrS == s.size();
    }
};