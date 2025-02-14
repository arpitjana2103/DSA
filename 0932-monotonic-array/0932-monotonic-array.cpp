class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increasing = true;
        if(nums[0] > nums[nums.size() - 1]) increasing = false;
        int res = true;

        if(increasing){
            for(int i=1; i<nums.size(); i++){
                if(nums[i-1] > nums[i]){
                    res = false;
                }
            }
        }else{
            for(int i=1; i<nums.size(); i++){
                if(nums[i-1] < nums[i]){
                    res = false;
                }
            }
        }

        return res;
    }
};