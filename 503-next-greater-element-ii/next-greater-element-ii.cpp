class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        int n=nums.size();
        vector<int>ans(n);
        // unordered_map<int, int> mp;
        // st.push()

        for(int i = 2*n-1; i >=0 ; i--){
           int curr=nums[i%n];
           while(!st.empty() && st.top()<=curr){
            st.pop();
           }
           if(st.empty()){
            // ans.push_back(-1);
            ans[i%n]=-1;
            
           }
           else{
            ans[i%n]=st.top();

           }
           st.push(curr);
        }

return ans;

        
    }
};