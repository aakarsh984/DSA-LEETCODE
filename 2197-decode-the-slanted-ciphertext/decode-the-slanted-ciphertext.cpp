class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows == 1) {
            return encodedText;
        }

        int col = encodedText.length() / rows;
        int x = 0;
        vector<vector<char>> res(rows, vector<char>(col, ' '));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
                res[i][j] = encodedText[x++];
                // x++;
            }
        }
        string ans = "";
        // int i=0,j=0;
        for (int startCol = 0; startCol < col; startCol++) {
            int i = 0;
            int j = startCol;
            // if(res[i][j+1]==' ' &&res[i+1][j+1]==' ']) break;
            while (i < rows && j < col) {
                ans += res[i][j];
                i++;
                j++;
            }
        }
        while (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};