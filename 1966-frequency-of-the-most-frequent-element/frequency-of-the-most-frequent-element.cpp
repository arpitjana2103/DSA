class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        long long l = 0;
        long long r = 0;

        long long total = 0;
        long long res = 0;

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