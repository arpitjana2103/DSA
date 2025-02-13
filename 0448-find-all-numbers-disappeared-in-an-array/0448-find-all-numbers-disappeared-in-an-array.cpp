class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> res;
        
        for(int i = 0; i<nums.size(); i++){
            int actIndex = nums[i] - 1;
            while(nums[actIndex] != nums[i]){
                swap(nums[i], nums[actIndex]);
                actIndex = nums[i] - 1;
            }
        }

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != i+1) res.push_back(i+1);
        }

        return res;

    }
};