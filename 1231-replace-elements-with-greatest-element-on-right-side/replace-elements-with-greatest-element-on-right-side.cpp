class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rGreatest = -1;
        int n = arr.size();
        for(int i = n-1; i>=0; i--){
            int temp = arr[i];
            arr[i] = rGreatest;
            rGreatest = max(temp, rGreatest);
        }
        return arr;
    }
};