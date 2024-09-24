class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(char ch:s){
            if(st.empty()){
                st.push(ch);
            }else{
                if(st.top() == ch){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        // REVERSE res
        int left = 0;
        int right = res.size()-1;

        while(left <= right){
            swap(res[left], res[right]);
            left++;
            right--;
        }

        return res;
    }
};