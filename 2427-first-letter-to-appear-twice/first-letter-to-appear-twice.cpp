class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
            if(mp[x]==2){
                return x;
            }
        }

       return 'A'; 
    }
};