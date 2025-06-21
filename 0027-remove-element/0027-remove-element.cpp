class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        // Forword Pointer
        int fPtr = 0;
        // Backword Pointer
        int bPtr = size-1;

        while(fPtr <= bPtr){
            if(nums[fPtr] == val){
                swap(nums[fPtr], nums[bPtr]);
                bPtr--;
            }else{
                fPtr++;
            }
        }

        return fPtr;
    }
};