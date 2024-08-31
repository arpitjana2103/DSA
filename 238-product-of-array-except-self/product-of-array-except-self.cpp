class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);

        int preProduct = 1;
        int postProduct = 1;

        for(int i = 0; i<nums.size(); i++){
            res[i] *= preProduct;
            preProduct *= nums[i];
        }

        for(int i = nums.size()-1; i>=0; i--){
            res[i] *= postProduct;
            postProduct *= nums[i];
        }

        return res;

    }
};