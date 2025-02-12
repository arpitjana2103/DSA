class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;

        for(int i = 0; i < s.size(); i++){
            if(isdigit(s.at(i))){
                int digit = static_cast<int>(s.at(i)) - 48;
                if(digit > largest){
                    secondLargest = largest;
                    largest = digit;
                }
                if(digit < largest && digit > secondLargest){
                    secondLargest = digit;
                }
            }
        }

        return secondLargest;
    }
};