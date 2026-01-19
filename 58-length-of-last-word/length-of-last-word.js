/**
 * @param {string} s
 * @return {number}
 */

// Sol 1 : TC On, SC On
// var lengthOfLastWord = function(s) {
//     return s.split(" ").filter(str => str !== "").at(-1).length;
// };

var lengthOfLastWord = function(s) {
    let prevChar = " ";
    let i = s.length - 1;
    let count = 0;

    while(i >= 0){
        const ch = s.at(i);
        if(ch === " " && prevChar !== " ") return count;
        if(ch !== " ") count++;
        prevChar = ch;
        i--;
    }

    return count;
};