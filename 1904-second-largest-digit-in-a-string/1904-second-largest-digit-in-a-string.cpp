class Solution {
public:
    int secondHighest(string s) {
        int l1 = -1;
        int l2 = -1;

        for(char ch:s){
            if(isdigit(ch)) {
                int digit = ch - 48;
                if(digit > l1){
                    l2 = l1;
                    l1 = digit;
                }else if(digit < l1 && digit > l2){
                    l2 = digit;
                }
            }
        }

        return l2;
    }
};