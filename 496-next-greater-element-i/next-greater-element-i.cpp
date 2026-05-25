class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int> st;
        unordered_map<int, int> mp;
        for(auto x:nums2){
           while(!st.empty() && x>st.top()){
            mp[st.top()]=x;
            st.pop();
           } 
           st.push(x);
        }
        for(auto y:nums1){
            if(mp.count(y)){
                ans.push_back(mp[y]);
            }
            else{
                ans.push_back(-1);
            }
        }
         return ans;
    }
};