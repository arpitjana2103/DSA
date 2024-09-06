class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;
        vector<int> res(nums.size());
        int ptr = nums.size() - 1;


        while(lo <= hi){
            int lsq = pow(nums[lo], 2);
            int hsq = pow(nums[hi], 2);
            if(lsq > hsq){
                res[ptr--] = lsq;
                lo++;
            }else{
                res[ptr--] = hsq;
                hi--;
            }
        }

        return res;
    }
};