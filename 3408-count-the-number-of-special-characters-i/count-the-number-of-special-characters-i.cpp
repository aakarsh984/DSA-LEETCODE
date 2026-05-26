class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        vector<int> cap(26, 0);
        vector<int> lower(26, 0);

        int count = 0;

        for(char ch : word) {

            if(islower(ch)) {
                lower[ch - 'a'] = 1;
            }
            else {
                cap[ch - 'A'] = 1;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(cap[i] && lower[i]) {
                count++;
            }
        }

        return count;
    }
};