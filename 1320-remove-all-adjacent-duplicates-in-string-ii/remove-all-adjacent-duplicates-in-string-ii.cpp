class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

        for(char ch:s){
            if(st.empty()){
                st.push({ch, 1});
            }else{
                if(st.top().first == ch){
                    if(st.top().second == k-1){
                        st.pop();
                    }else{
                        st.top().second++;
                    }
                }else{
                    st.push({ch, 1});
                }
            }
        }

        string res = "";

        while(!st.empty()){
            char ch = st.top().first;
            int count = st.top().second;
            
            for(int i = 0; i<count; i++){
                res += ch;
            }

            st.pop();
        }

        // Reverse res;
        int left = 0;
        int right = res.size() - 1;

        while(left <= right){
            swap(res[left], res[right]);
            left++;
            right--;
        }

        return res;
    }
};