class Solution {
public:
    void reverse(string &s){
        int left = 0;
        int right = s.size()-1;

        while(left <= right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    string decodeString(string s) {
        stack<string> st;

        for(char c:s){
            string ch = string(1, c);

            if(ch != "]"){
                st.push(ch);
            }else{
                string subStr = "";
                string subStrCount = "";
                string finalSubStr = "";

                // Create subStr
                while(st.top() != "["){
                    subStr += st.top();
                    st.pop();
                }
                st.pop();

                // Create subStrCount
                while(!st.empty() && isdigit(st.top()[0])){
                    subStrCount += st.top();
                    st.pop();
                }

                reverse(subStrCount);
                
                for(int i = 0; i<stoi(subStrCount); i++){
                    finalSubStr += subStr;
                }

                st.push(finalSubStr);
            }
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        reverse(res);
        return res;
    }
};