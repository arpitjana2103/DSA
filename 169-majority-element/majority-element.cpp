class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boor Moore Algo

        int res = NULL;
        int count = 0;

        for(int num:nums){
            if(count == 0){
                res = num;
                count++;
            }else if(num == res){
                count++;
            }else if(num != res){
                count--;
            }
        }

        return res;
    }
};