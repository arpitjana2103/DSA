class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> res;

        int i = 0;

        while(i < intervals.size()){
            vector<int> cInterval = intervals[i];

            // Case 01 :: [newInterval], [cInterval]
            if(newInterval[1] < cInterval[0]){
                res.push_back(newInterval);
                res.insert(res.end(), intervals.begin() + i, intervals.end());
                return res;
            }

            // Case 02 :: [cInterval], [newInterval]
            else if(cInterval[1] < newInterval[0]){
                res.push_back(cInterval);
            }

            // Case 03 :: cInterval & newInterval are colliding
            else {
                newInterval[0] = min(cInterval[0], newInterval[0]);
                newInterval[1] = max(cInterval[1], newInterval[1]);
            }

            i++;
        }

        res.push_back(newInterval);

        return res;
    }
};