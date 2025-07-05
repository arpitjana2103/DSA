class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>ust;

        for(int num:nums){
            if(ust.count(num)) return true;
            else ust.insert(num);
        }

        return false;
    }
};