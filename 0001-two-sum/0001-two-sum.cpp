class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> res;
        int i = 0;

        for(int num:nums){
            if(umap.count(target-num)){
                res = {i, umap[target-num]};
                break;
            }
            umap[num] = i++;
        }

        return res;
    }
};