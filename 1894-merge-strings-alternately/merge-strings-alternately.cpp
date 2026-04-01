class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int total = min(n, m);
        string res = "";

        for (int i = 0; i < total; i++) {
            res += word1[i];
            res += word2[i];
        }

        if (n < m) {
            return res + word2.substr(total);
        } 
        else {
            return res + word1.substr(total);
        }
    }
};