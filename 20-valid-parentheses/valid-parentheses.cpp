class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()%2 !=0) return false;
        if(s[0]==')' || s[0]=='}' ||s[0]==']') return false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' ||s[i]=='[') st.push(s[i]);
            
            
            if(st.empty()){
            return false;
        }
        if((s[i]==')' && st.top()!='(') ||(s[i]=='}' && st.top()!='{')  ||(s[i]==']' && st.top()!='[') ){
            
                return false;
            }
            
            if((s[i]==')' && st.top()=='(') ||(s[i]=='}' && st.top()=='{')  ||(s[i]==']' && st.top()=='[') ){
            
                st.pop();
            }


        }
        if(st.empty()){
            return true;
        }
        return false;
       
    }
};