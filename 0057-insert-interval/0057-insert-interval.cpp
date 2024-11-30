class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res = {};

        for(int i = 0; i < intervals.size(); i++){
            vector<int> currInterval = intervals[i];

            if(newInterval.at(1) < currInterval.at(0)){
                res.push_back(newInterval);
                res.insert(res.end(), intervals.begin() + i, intervals.end());
                return res;
            }else if(newInterval.at(0) > currInterval.at(1)){
                res.push_back(currInterval);
            }else {
                newInterval[0] = min(newInterval[0], currInterval[0]);
                newInterval[1] = max(newInterval[1], currInterval[1]);
            }
        }

        res.push_back(newInterval);
        return res;
    }
};