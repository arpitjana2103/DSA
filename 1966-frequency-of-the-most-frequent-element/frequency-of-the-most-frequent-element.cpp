class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        long l = 0;
        long r = 0;

        long total = 0;
        long res = 0;

        while(r < nums.size()){
            total += nums[r];
            while((r-l+1)*nums[r] > total+k){
                total -= nums[l++];
            }
            res = max(r-l+1, res);
            r++;
        }
        return res;
    }
};