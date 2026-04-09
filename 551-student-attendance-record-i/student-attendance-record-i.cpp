class Solution {
public:
    bool checkRecord(string s) {
        int total =s.length();
        int a=0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='A')a++;
        }
        if(s.find("LLL")==string::npos && a<2 )return true;
        return false;

        
    }
};