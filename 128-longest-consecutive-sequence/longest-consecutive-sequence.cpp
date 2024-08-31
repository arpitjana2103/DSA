class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet;
        int longestSeq = 0;

        for(int num:nums){
            numsSet.insert(num);
        }

        for(int num:nums){
            int temp;
            int count = 0;
            if(!numsSet.count(num-1)){
                temp = num;
                count++;
                while(numsSet.count(temp+1)){
                    count += 1;
                    temp++;
                }
            }

            longestSeq = max(count, longestSeq);
        }

        return longestSeq;
    }
};