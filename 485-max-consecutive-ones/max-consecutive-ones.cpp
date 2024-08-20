class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int count = 0;
        int n = nums.size();

        while(fast < n){
            if(nums[fast] == 1) fast++;
            else {
                count = max(fast-slow, count);
                fast++;
                slow = fast;
            }
        }

        count = max(fast-slow, count);
        return count;
    }
};