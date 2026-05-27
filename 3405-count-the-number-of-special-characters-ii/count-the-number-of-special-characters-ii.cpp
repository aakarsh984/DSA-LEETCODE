class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        // vector<bool>small(26,false);
        vector<bool>cap(26,false);
        int count =0;
        for(int i = 0; i < word.length(); i++){
            if(islower(word[i])){
                mp[word[i]]=i;//last index
            }
            else{//upper hai
            if(!mp.count(word[i])){
                mp[word[i]]=i;
            }
            }
        }//for end

        unordered_set<char> visited;

        for(char c : word){
            if(islower(c) && !visited.count(c)){ // 👈 skip if already counted
                if(mp.count(c) && mp.count(toupper(c))){
                    if(mp[c] < mp[toupper(c)]){
                        count++;
                        visited.insert(c);
                    }
                }
            }
        }
         return count;

    }
};