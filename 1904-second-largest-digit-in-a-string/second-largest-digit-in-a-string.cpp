class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;

        for(char ch:s){
            if(isdigit(ch)){
                int num = int(ch) - 48;
                if(num > largest){
                    secondLargest = largest;
                    largest = num;
                }else if(num != largest && num > secondLargest){
                    secondLargest = num;
                }
            }
        }

        return secondLargest;
    }
};