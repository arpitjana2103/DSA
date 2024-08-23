class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res;

        for(int num:nums){
            if(count == 0){
                count++;
                res = num;
            }else if(res == num){
                count++;
            }else if(res != num){
                count--;
            }
        }

        return res;
    }
};