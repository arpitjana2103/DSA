class Solution {
public:
    int calc(int num1, string token, int num2){
        if (token == "+") {
            return num1 + num2;
        } else if (token == "-") {
            return num1 - num2;
        } else if (token == "*") {
            return num1 * num2;
        } else if (token == "/") {
            return num1 / num2;
        }
        return -1;
    }

    bool isOperator(string str){
        if(str == "+" or str == "-" or str == "*" or str == "/"){
            return true;
        }
        return false;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string token:tokens){
            if(!isOperator(token)){
                st.push(stoi(token));
            }else{
                int num2 = st.top(); st.pop();
                int num1 = st.top(); st.pop();
                int res = calc(num1, token, num2);
                st.push(res);
            }
        }
        return st.top();
    }
};