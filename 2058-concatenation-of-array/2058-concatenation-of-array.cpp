class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const int n = nums.size();
        vector<int> res(n*2);

        for(int i = 0; i<n; i++){
            res.at(i) = nums.at(i);
            res.at(i+n) = nums.at(i);
        }

        return res;
    }
};