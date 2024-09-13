class Solution {
public:
    int bruteForce(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        int maxCount = 0;

        for(int i = 0; i<nums.size(); i++){
            int budget = k;
            int target = nums[i];
            int count = 0;
            for(int j = i; j>=0; j--){
                int temp = target - nums[j];
                if(temp <= budget){ 
                    budget -= temp;
                    count++;
                }else{
                    break;
                }
            }
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }


    int maxFrequency(vector<int>& nums, int k) {
        // BRUTE FORCE
        // return bruteForce(nums, k);
        sort(nums.begin(), nums.end());

        int slow = 0;
        int fast = 0;
        int res = 0;
        long int total = 0;

        while(fast < nums.size()){
            total += nums[fast];

            while(nums[fast]*long(fast-slow+1) > total+k){
                total -= nums[slow++];
            }

            res = max(res, fast-slow+1);

            fast++;
        }

        return res;
    }
};