class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Step 01 : Rearrange the array
        int i = 0;
        while(i < n){
            int currIndex = nums[i];

            while(currIndex < n && nums[currIndex] != currIndex){
                swap(nums[i], nums[currIndex]);
                currIndex = nums[i];
            }

            i++;
        }

        i = 0;
        while(i < n){
            if(nums[i] != i){
                return i;
            }
            i++;
        }

        return n;
    }
};