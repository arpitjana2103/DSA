/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    console.log(s.split(" "));
    return s.split(" ").filter(str => str !== "").at(-1).length;
};