class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int check=0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                if(check>0){
                      res.push_back(s[i]);
                }
                check++;
              
            }
            else{//s[i]==')'
             check--;
                if(check>0){
                    res.push_back(s[i]);
                }
                
            }
        }
        return res;
    }
};