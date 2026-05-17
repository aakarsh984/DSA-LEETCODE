class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.length();
        // if(s.length()==2) return false;
        int diff=0;

        for(int i = 0; i < n-1; i++){
            diff=abs((s[i] - '0')-(s[i+1] - '0'));
            if(diff>=3) return false;
        }
         return true;

        
    }
};