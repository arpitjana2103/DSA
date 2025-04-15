class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;

        for(int num:nums){
            if(umap.count(num)) return true;
            umap[num] = 1;
        }

        return false;
    }
};