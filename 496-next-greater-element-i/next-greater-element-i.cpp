class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;

        for(int i = nums2.size()-1; i>=0; i--){
            int num = nums2[i];

            while(!st.empty() && st.top() <= num){
                st.pop();
            }

            if(st.empty()){
                mp[num] = -1;
            }else{
                mp[num] = st.top();
            }

            st.push(num);
        }


        for(int i = 0; i<nums1.size(); i++){
            nums1[i] = mp.at(nums1[i]);
        }

        return nums1;
    }
};