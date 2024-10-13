class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> track(nums.size(), 0);

        for(int num:nums){
            track[num-1]++;
        }

        vector<int> res;
        for(int i = 0; i<track.size(); i++){
            int num = track[i];
            if(num == 0) res.push_back(i+1);
        }

        return res;
    }
};