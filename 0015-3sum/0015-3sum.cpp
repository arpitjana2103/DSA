class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int lo = i+1;
            int hi = n-1;

            while(lo < hi){
                if(nums[lo]+nums[hi] == target){
                    res.push_back({nums[i], nums[lo], nums[hi]});
                    while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                    while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                    lo++;
                    hi--;
                }else if(nums[lo] + nums[hi] < target) lo++;
                else hi--;
            }
        }

        return res;
    }
};