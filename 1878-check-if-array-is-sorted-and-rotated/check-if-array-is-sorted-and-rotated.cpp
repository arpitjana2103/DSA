class Solution {
public:
    bool check(vector<int>& nums) {
        int greaterPrevCount = 0;
        int prev = nums[nums.size()-1];

        for(int num:nums){
            if(prev > num){
                greaterPrevCount++;
            }
            prev = num;
        }

        if(greaterPrevCount > 1) return false;
        else return true;
    }
};