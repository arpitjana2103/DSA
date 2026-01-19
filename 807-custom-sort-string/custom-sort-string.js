/**
 * @param {string} order
 * @param {string} s
 * @return {string}
 */
var customSortString = function(order, s) {
    const orderMp = new Map();

    for(const ch of order){
        orderMp.set(ch, 0);
    }

    let tempStr = "";

    for(const ch of s){
        if(orderMp.has(ch)){
            orderMp.set(ch, orderMp.get(ch) + 1)
        }else{
            tempStr += ch;
        }
    }

    let res = "";

    for(const ch of order){
        const count = orderMp.get(ch);
        res += ch.repeat(count);
    }

    return res + tempStr;
};