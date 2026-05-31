class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>map(256,0);
        vector<bool>vis(256,false);

        for(int i = 0; i < s.size(); i++){
            if(map[s[i]]==0 && vis[t[i]]==false){
                map[s[i]]=t[i];
                vis[t[i]]=true;
            }
        }
         for(int i = 0; i < s.size(); i++){
             if(map[s[i]]!=t[i])return false;
         }
         return true;


        
    }
};