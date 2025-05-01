class Solution {
public:
    void printVector(vector<int>& nums){
        for(int num:nums){
            cout << num << " ";
        }
        cout << endl;
    }
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while(mid <= right){
            if(nums[mid] == 2) 
                swap(nums[right--], nums[mid]);
            else if(nums[mid] == 0) 
                swap(nums[left++], nums[mid++]); 
            else if(nums[mid] == 1) 
                mid++;
        }
    }
};