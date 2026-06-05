class Solution {
public:
    int longestValidParentheses(string s) {
        //in stack push the last inlavid index
        //har opeinng inavlid

        int n=s.length();
        stack<int>st;
        st.push(-1);
        int len=0;
        for(int i = 0; i < n; i++){
            if(s[i]=='(')st.push(i);
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    len=max(len,i-st.top());
                }
            }
        }
return len;        
    }
};