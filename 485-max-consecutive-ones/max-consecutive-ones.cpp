class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int count = 0;

        while(fast < nums.size()){
            if(nums[fast] == 1) fast++;
            else {
                fast++;
                slow = fast;
            }
            count = max(fast-slow, count);
        }

        return count;
    }
};