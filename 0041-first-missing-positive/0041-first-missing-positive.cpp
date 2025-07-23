class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Arrange the Array
        for(int i = 0; i<n; i++){
            int CI = nums[i] > 0 ? nums[i]-1 : -1;
            while(CI >= 0 && CI < n && nums[CI] != nums[i]){
                swap(nums[i], nums[CI]);
                CI = nums[i]-1;
            }
        }

        // Find the Missing Positive Int
        for(int i = 0; i<n; i++){
            int EX = i+1;
            if(nums[i] != EX) return EX;
        }
        return n+1;
    }

    // CI = Currect Index
    // EX = Expected Num
};