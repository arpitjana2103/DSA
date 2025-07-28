class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int target = -nums[i];
            int lo = i+1;
            int hi = n-1;

            while(lo < hi){
                int sum = nums[lo] + nums[hi];
                if(sum < target) lo++;
                if(sum > target) hi--;
                if(sum == target) {
                    res.push_back({-target, nums[lo], nums[hi]});
                    while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                    while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                    lo++;
                    hi--;
                }
            }
        }

        return res;
    }
};