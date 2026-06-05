class Solution {
public:
    bool find132pattern(vector<int>& arr) {
        //2nd number >3rd number >1st number
        stack<int>st;
        int third=INT_MIN;
        for(int i = arr.size()-1; i >=0; i--){
            if(arr[i]<third)return true;
            while(!st.empty() and arr[i]>st.top()){
                third=st.top();
                st.pop();
            }
            st.push(arr[i]);
            
        }
        return false;

        
    }
};