class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isInc = true;
        bool isDec = true;

        for(int i = 1; i<nums.size(); i++){
            if(isInc && nums[i] < nums[i-1]) isInc = false;
            if(isDec && nums[i] > nums[i-1]) isDec = false;
        }

        return isInc || isDec;
    }
};