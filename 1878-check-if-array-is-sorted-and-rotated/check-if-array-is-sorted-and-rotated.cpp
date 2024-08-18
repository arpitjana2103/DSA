class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int prev = n-1;
        int count = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] < nums[prev]) count++;
            prev = i;
        }

        if(count > 1) return false;
        else return true;
    }
};