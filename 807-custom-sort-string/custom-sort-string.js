/**
 * @param {string} order
 * @param {string} s
 * @return {string}
 */
var customSortString = function(order, s) {
    const orderMp = {};

    for(const ch of order){
        orderMp[ch] = 0;
    }

    let tempStr = "";

    for(const ch of s){
        if(orderMp.hasOwnProperty(ch)){
            orderMp[ch]++;
        }else{
            tempStr += ch;
        }
    }

    let res = "";

    for(const ch of order){
        const count = orderMp[ch];
        res += ch.repeat(count);
    }

    return res + tempStr;
};