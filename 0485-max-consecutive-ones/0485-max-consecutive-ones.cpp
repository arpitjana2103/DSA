class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        int fast = 0;

        while(fast < nums.size()){
            
            if(nums[fast] == 1){
                count++;
                fast++;
            }else if(nums[fast] == 0){
                fast++;
                count = 0;
            }

            maxCount = max(count, maxCount);
        }

        return maxCount;
    }
};