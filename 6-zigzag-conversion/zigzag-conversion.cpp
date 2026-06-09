class Solution {
public:
    string convert(string s, int numRows) {

        vector<vector<char>> v(numRows);
        if(numRows==1)return s;

        int i = 0;
        int r = 0;

        bool down = true;
        while (i < s.size()) {
            if (down) { // down will go vertically straight
                if (r < numRows) {
                    v[r++].push_back(s[i]);
                    i++;
                } else {
                    down = false;
                    r = numRows - 2;
                }

            } else { // going up diagonaly c+1 row-1
                if (r >= 0) {
                    v[r--].push_back(s[i]);
                    i++;
                } else {
                    down = true;
                    r = 1;
                }
            }
        }
        string ans;

        for (int i = 0; i < numRows; i++) {
            for (char ch : v[i]) {
                ans += ch;
            }
        }

        return ans;
    }
};