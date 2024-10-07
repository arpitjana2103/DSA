class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;

        for(int num:nums){
            total += num;
        }

        int left = 0;
        int right = total;
        for(int i = 0; i<nums.size(); i++){
            right -= nums[i];
            if(left == right) return i;
            left += nums[i];
        }
        
        return -1;
    }
};