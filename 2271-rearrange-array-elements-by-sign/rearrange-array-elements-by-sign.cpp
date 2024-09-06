class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(), 0);

        int ptP = 0;
        int ptN = 1;

        for(int ele:nums){
            if(ele < 0){
                res[ptN] = ele;
                ptN += 2;
            }else{
                res[ptP] = ele;
                ptP += 2;
            }
        }

        return res;

    }
};