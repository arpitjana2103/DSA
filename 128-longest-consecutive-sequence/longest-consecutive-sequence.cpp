class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet;
        int longestSeq = 0;

        for(int num:nums){
            numsSet.insert(num);
        }

        for(int num:nums){
            int length = 1;
            if(!numsSet.count(num-1)){
                while(numsSet.count(num+1)){
                    length++;
                    num++;
                }
            }

            longestSeq = max(length, longestSeq);
        }

        return longestSeq;
    }
};