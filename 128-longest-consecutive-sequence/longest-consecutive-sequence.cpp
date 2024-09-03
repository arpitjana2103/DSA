class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for(const int& num:nums){
            set.insert(num);
        }

        int maxLength = 0;

        for(int& num:nums){
            if(!set.count(num-1)){
                int length = 0;
                while(set.count(num)){
                    length++;
                    num++;
                }
                maxLength = max(length, maxLength);
            }
        }

        return maxLength;
    }
};