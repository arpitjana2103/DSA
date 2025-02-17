class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> res_map;

        for(int i = 0; i<nums.size(); i++){
            res_map[nums[i]]++;

            if(res_map.size() > 2){
                vector<int> extra_nums;

                for(auto& pair:res_map){
                    pair.second--;
                    if(pair.second == 0) 
                        extra_nums.push_back(pair.first);
                }

                for(int num:extra_nums){
                    res_map.erase(num);
                }
            }
        }

        for(auto& pair:res_map){
            pair.second = 0;
        }

        for(int num:nums){
            if(res_map.count(num))
                res_map[num]++;
        }

        vector<int> res;

        for(auto& pair:res_map){
            if(pair.second > nums.size()/3)
                res.push_back(pair.first);
        }

        return res;
    }
};