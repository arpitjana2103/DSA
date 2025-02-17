class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res = NULL;

        for(int num:nums){
            if(count == 0){
                res = num;
                count++;
            }else if(res == num){
                count++;
            }else{
                count--;
            }
        }

        return res;
    }
};