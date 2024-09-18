class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

        for(char ch:s){
            if(st.empty()){
                st.push(make_pair(ch, 1));
            }else{
                if(st.top().first == ch){
                    int count = st.top().second + 1;
                    if(count >= k) count -= k;
                    st.pop();
                    if(count > 0) {
                        st.push(make_pair(ch, count));
                    }
                }else{
                    st.push(make_pair(ch, 1));
                }
            }
        }

        string res;

        while(!st.empty()){
            char ch = st.top().first;
            int count = st.top().second;
            cout << ch << count << endl;
            st.pop();

            for(int i = 0; i<count; i++){
                res += ch;
            }
        }

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