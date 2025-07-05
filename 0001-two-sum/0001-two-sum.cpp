class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;

        int i = 0;
        for(int num:nums){
            if(ump.count(target - num)) 
                return {ump.at(target-num), i};
            else ump[num] = i;
            i++;
        }

        return {};
    }
};