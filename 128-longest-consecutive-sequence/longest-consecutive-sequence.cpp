class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet;
        int longestSeq = 0;

        for(int num:nums){
            numsSet.insert(num);
        }

        for(int num:nums){
            int count = 0;
            if(!numsSet.count(num-1)){
                count++;
                while(numsSet.count(num+1)){
                    count += 1;
                    num++;
                }
            }

            longestSeq = max(count, longestSeq);
        }

        return longestSeq;
    }
};