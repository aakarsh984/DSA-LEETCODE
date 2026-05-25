class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        stack<int> st;
        unordered_map<int, int> mp;
        st.push(nums2[0]);
        for(int i = 1; i < m; i++){
           while(!st.empty() && nums2[i]>st.top()){
            mp[st.top()]=nums2[i];
            st.pop();
           } 
           st.push(nums2[i]);
           

        }
        for(int i = 0; i < n; i++){
            if(mp.count(nums1[i])){
                ans.push_back(mp[nums1[i]]);
            }
            else{
                ans.push_back(-1);
            }
        }
         return ans;
    }
};