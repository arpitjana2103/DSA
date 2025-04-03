class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = NULL;
        int count = 0;

        for(int num:nums){
            if(count == 0){
                res = num;
                count++;
            }else if(num == res){
                count++;
            }else{
                count--;
                if(count < 0) count = 0;
            }
        }

        return res;
    }
};