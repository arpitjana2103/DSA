class Solution {
public:
    void reverse(vector<int>& vec, int left, int right){
        while(left < right){
            swap(vec[left], vec[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size()-1);
    }
};