class Solution {
public:
    bool rotateString(string s, string goal) {
        // int n=s.size();

        for(int i=0;i<s.size();i++){
            char d=s[0];
            s=s.substr(1)+d;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};