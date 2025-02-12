class Solution {
public:
    bool check(vector<int>& nums) {
       int prev = nums.at(nums.size()-1);
       int count = 0;

       for(int i = 0; i < nums.size(); i++){
           if(prev > nums[i]) count++;
           prev = nums[i];
       } 

       if(count > 1) return false;
       return true;
    }
};