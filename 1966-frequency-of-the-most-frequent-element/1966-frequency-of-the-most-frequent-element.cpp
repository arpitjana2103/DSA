class Solution {
public:
    int bruteForce(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());

        int maxCount = INT_MIN;
        int i = 0;
        while(i < nums.size()){
            int target = nums[i];
            int budget = k;
            int count = 0;

            int j = i;
            while(j >= 0){
                int cost = target - nums[j];
                if(cost <= budget) {budget -= cost; count++;}
                else break;
                j--;
            }

            maxCount = max(maxCount, count);
            i++;
        }

        return maxCount;
    }

    int maxFrequency(vector<int>& nums, int k) {
        // BruteForce Technique
        // return bruteForce(nums, k);

        sort(nums.begin(), nums.end());

        int budget = k;
        long int total = 0;
        int fast = 0;
        int slow = 0;
        int res = 0;

        while(fast < nums.size()){
            total += nums[fast];

            while(nums[fast]*long(fast-slow+1) > total+budget) 
                total -= nums[slow++];
            
            res = max(res, fast-slow+1);

            fast++;
        }

        return res;

    }
};