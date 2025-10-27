/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {

    let prevEle = nums[nums.length - 1];
    let count = 0;
    
    for(let i = 0; i<nums.length; i++){
        const cEle = nums[i];
        if(prevEle > cEle) count++;
        prevEle = cEle;
    }

    if(count === 1) return true;
    else return false;
};