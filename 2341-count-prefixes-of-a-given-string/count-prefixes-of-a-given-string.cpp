class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for (int i = 1; i <= s.size(); i++) {
            string temp=s.substr(0, i);
            // auto it = find(words.begin(), words.end(), temp);
        for(int j=0;j<words.size();j++){
           if(temp==words[j]){
            count++;
            // words.erase(it);
           }
        }
        }
        return count;
    }
};