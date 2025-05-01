/**
 * @param {number[]} nums
 * @return {number}
 */

 const getSum = function (startI, endI, arr) {
    let i = startI;
    let sum = 0;
    while (i <= endI) {
        sum += arr[i];
        i++;
    }
    return sum;
};

var pivotIndex = function (arr) {
    let i = 0;
    let n = arr.length;
    let pvIndex = -1;

    while (i <= n - 1) {
        const lSum = getSum(0, i - 1, arr);
        const rSum = getSum(i + 1, n - 1, arr);
        if (lSum === rSum) {
            pvIndex = i;
            break;
        }
        i++;
    }

    return pvIndex;
};