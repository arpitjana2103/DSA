class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int res = 0;

        for(int num : nums){
            if(freq.count(num)){
                res += freq.at(num);
                freq[num]++;
            }else{
                freq[num] = 1;
            }
        }

        return res;
    }
};