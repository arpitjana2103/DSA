class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> leftSmallIndex(n, 0);
        vector<int> rightSmallIndex(n, 0);

        stack<int> st;

        // Left Small Index Array
        for(int i = 0; i < n; i++){
            while(!st.empty() and heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()) leftSmallIndex[i] = -1;
            else leftSmallIndex[i] = st.top();
            st.push(i);
        }

        // Clear Stack
        while(!st.empty()){
            st.pop();
        }

        // Right Small Index Array
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() and heights[st.top()] >= heights[i]){
                st.pop();
            }

            if(st.empty()) rightSmallIndex[i] = n;
            else rightSmallIndex[i] = st.top();
            st.push(i);
        }

        int res = INT_MIN;

        for(int i = 0; i < n; i++){
            int y = heights[i];
            int x = rightSmallIndex[i] - leftSmallIndex[i] - 1;
            res = max(res, x*y);
        }

        return res;
    }
};