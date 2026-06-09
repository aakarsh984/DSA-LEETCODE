class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        // vector<vector<char>> v(numRows);

        vector<string> v(numRows);
        int i = 0;
        int r = 0;

        bool down = true;
        while (i < s.size()) {
            if (down) { // down will go vertically straight
                if (r < numRows) {
                    v[r++].push_back(s[i++]);
                   
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

        for (auto& row : v)
            ans += row;

        return ans;
    }
};