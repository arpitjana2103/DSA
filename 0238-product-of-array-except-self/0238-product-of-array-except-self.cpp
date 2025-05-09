class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res;

        int preProd = 1;
        int postProd = 1;

        for(int i = 0; i<nums.size(); i++){
            res.push_back(preProd);
            preProd *= nums[i];
        }

        for(int i = nums.size()-1; i>=0; i--){
            res[i] *= postProd;
            postProd *= nums[i];
        }

        return res;
    }
};