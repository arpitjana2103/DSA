class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int fast = 0;
        int slow = 0;
        int sum = 0;

        int maxSum = INT_MIN;

        while(fast < nums.size()){
            if(sum < 0){
                sum = 0;
                slow = fast;
            }
            sum += nums[fast];
            maxSum = max(maxSum, sum);
            fast++;
        }

        return maxSum;
    }
};