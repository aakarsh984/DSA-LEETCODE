class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        int fr = 0, lr = r - 1;
        int fc = 0, lc = c - 1;

        vector<int> ans;

        while (fr <= lr && fc <= lc) {

            int i = fr, j = fc;

            // left → right
            j = fc;
            while (j <= lc) {
                ans.push_back(matrix[fr][j]);
                j++;
            }
            fr++;

            // top → bottom
            i = fr;
            while (i <= lr) {
                ans.push_back(matrix[i][lc]);
                i++;
            }
            lc--;

            // right → left
            if (fr <= lr) {
                j = lc;
                while (j >= fc) {
                    ans.push_back(matrix[lr][j]);
                    j--;
                }
                lr--;
            }

            // bottom → top
            if (fc <= lc) {
                i = lr;
                while (i >= fr) {
                    ans.push_back(matrix[i][fc]);
                    i--;
                }
                fc++;
            }
        }

        return ans;
    }
};