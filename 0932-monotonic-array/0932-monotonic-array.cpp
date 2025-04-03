class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isDecreasing = 1;
        if(nums[0] < nums[nums.size()-1]){
            isDecreasing = 0;
        }

        if(isDecreasing){
            for(int i = 1; i<nums.size(); i++){
                if(nums[i-1] < nums[i]) return false;
            }
        }else{
            for(int i = 1; i<nums.size(); i++){
                if(nums[i-1] > nums[i]) return false;
            }
        }

        return true;
    }
};