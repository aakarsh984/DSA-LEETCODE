class Solution {
public:
int getv(char c){
    if(c=='I') return 1;
    if(c=='V') return 5;
    if(c=='X') return 10;
    if(c=='L') return 50;
    if(c=='C') return 100;
    if(c=='D') return 500;
    return 1000;
}
    int romanToInt(string s) {
        // unordered_map<char, int> mp = {{'I', 1},   {'V', 5},   {'X', 10},
        //                                {'L', 50},  {'C', 100}, {'D', 500},
        //                                {'M', 1000}};
        
        int ans=0;
        for(int i=0;i<s.size();i++){
           int cur=getv(s[i]);
           int next=(s[i+1]<s.size()?0:getv(s[i+1]));
           if(cur>=next)ans+=cur;
           else ans-=cur;
        }
        return ans;
    }
};