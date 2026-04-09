class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(char c :s){
            if(c=='i'){
                reverse(ans.begin(),ans.end());
                continue;
            }
            ans+=c;
        }
        return ans;
        
    }
};