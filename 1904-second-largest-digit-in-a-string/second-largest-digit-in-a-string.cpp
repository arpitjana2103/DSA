class Solution {
public:
    int secondHighest(string s) {
       int l1 = -1;
       int l2 = -1;

       for(char ch:s){
          if(isdigit(ch)){
            int num = int(ch) - 48;
            if(num > l1){
                l2 = l1;
                l1 = num;
            }

            if(num > l2 && num < l1){
                l2 = num;
            }
          }
       }

       return l2;
    }
};