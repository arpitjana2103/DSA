class Solution {
public:
    long int cast_long(int num){
        return static_cast<long>(num);
    }

    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        /*
        // Brute Force
        int kClone = k;
        int res = 0;

        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int count = 0;
            k = kClone;
            for(int j = i; j>=0; j--){
                int temp = num - nums[j];
                if(temp <= k){
                    k -= temp;
                    count++;
                }else{
                    break;
                } 
            }
            res = max(res, count);
        }

        return res;
        */

        int s = 0;
        int f = 0;
        int res = 0;
        long int total = 0;

        while(f < nums.size()){
            total += nums[f];

            while(cast_long(nums[f])*(f-s+1) > total+k){
                total -= nums[s++];
            }

            res = max(res, f-s+1);

            f++;
        }

        return res;
    }
};