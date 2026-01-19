/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {0
    let fast = 0;
    let count = 0;
    let res = 0;

    while(fast < nums.length){
        if(nums[fast] === 1){
            count++;
            res = Math.max(res, count);
        }else{
            count = 0;
        }
        fast++;
    }

    return res;
};