class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>a (26,0);
        for(auto x:s){
            a[x-'a']++;
            if(a[x-'a']==2){
                return x;
            }
        }

       return 'A'; 
    }
};