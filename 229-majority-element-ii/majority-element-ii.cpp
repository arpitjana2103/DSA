class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> resMap;
        vector<int> resKeys;

        for(int num:nums){
            if(resMap.count(num)) resMap[num]++;
            else resMap[num] = 1;

            if(resMap.size() > 2){
                vector<int> keys;
                for(auto& pair:resMap){
                    pair.second--;
                    if(pair.second == 0) keys.push_back(pair.first);
                }
                for(int key:keys){
                    resMap.erase(key);
                }
            }
        }
        
        for(auto& pair:resMap){
            pair.second = 0;
            for(int num:nums){
                if(num == pair.first) pair.second++;
            }
        }

        for(auto& pair:resMap){
            if(pair.second > nums.size()/3){
                resKeys.push_back(pair.first);
            }
        }

        return resKeys;
    }
};