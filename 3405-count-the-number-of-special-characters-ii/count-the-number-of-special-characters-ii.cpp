class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mp;
        // vector<bool>small(26,false);
        vector<bool> cap(26, false);
        int count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (islower(word[i])) {
                mp[word[i]] = i; // last index
            } else {             // upper hai
                if (!mp.count(word[i])) {
                    mp[word[i]] = i;
                }
            }
        } // for end

    for(auto &p: mp){
        char c=p.first;
        int y=p.second;
        if(islower(c)){
            if(mp.count(c-32)){
                if(y<mp[c-32]) count++;
            }
        }

    }
       
        return count;
    }
};