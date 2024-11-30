class Solution {
public:
    static bool compFn(vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort the intervals vector
        sort(intervals.begin(), intervals.end(), compFn);
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i = 0; i < intervals.size(); i++){
            int& lastEnd = res.at(res.size()-1).at(1);
            int start = intervals.at(i).at(0);
            int end = intervals.at(i).at(1);

            if(lastEnd < start){
                res.push_back(intervals.at(i));
            }else{
                lastEnd = max(lastEnd, end);
            }   
        }

        return res;
    }
};