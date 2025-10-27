/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */

 function reverse(arr, start, end){
    while(start < end){
        let temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
var rotate = function(nums, k) {
    const l = nums.length;
    k = k%l;
    reverse(nums, 0, l-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, l-1);
};