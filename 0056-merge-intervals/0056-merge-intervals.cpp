class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i = 0; i<intervals.size(); i++){
            int &lastEnd = res[res.size() - 1][1];
            int s = intervals[i][0];
            int e = intervals[i][1];
            if(lastEnd >= s){
                lastEnd = max(lastEnd, e); 
            }else{
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};