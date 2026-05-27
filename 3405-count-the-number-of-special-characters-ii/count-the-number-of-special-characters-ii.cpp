class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mp;
        int count = 0;
        int n=word.length();
        for (int i = 0; i < n; i++) {
            if (islower(word[i])) {
                mp[word[i]] = i; // last index
            } else {             // upper hai
                if (!mp.count(word[i])) {
                    mp[word[i]] = i;//first occurence
                }
            }
        } // for end

         for(int i = 0; i < 26; i++){

            int lu=i+'a';
            int up=i+'A';

            if(mp.count(lu) && mp.count(up)){
                if(mp[lu]<mp[up]){
                    count++;
                }
            }
             
         }
       
        return count;
    }
};