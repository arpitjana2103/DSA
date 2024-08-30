class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int l = 0;
        int r = 0;
        long total = 0;
        int res = 0;

        while(r < nums.size()){
            total += nums[r];
            while(static_cast<long>(r-l+1)*nums[r] > total+k){
                total -= nums[l++];
            }
            res = max(r-l+1, res);
            r++;
        }
        return res;
    }
};