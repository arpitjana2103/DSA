class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ust;
        ust.insert(nums.begin(), nums.end());

        return ust.size() < nums.size();
    }
};