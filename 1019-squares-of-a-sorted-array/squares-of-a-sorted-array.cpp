class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int lo = 0;
        int hi = n-1;
        int ptr = n-1;


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
