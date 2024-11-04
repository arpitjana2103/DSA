class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 0;

        while(fast < nums.size()){
            if(nums[fast] == nums[slow]){
                fast++;
            }else{
                slow++;
                swap(nums[slow], nums[fast]);
                fast++;
            }
        }

        return slow+1;
    }
};