class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c= matrix[0].size();
        int fr=0;
        int lr=r-1;
        int fc=0;
        int lc=c-1;
        int t= r*c;
        vector<int>ans;
        int i=0,j=0;
        while (fr <= lr && fc <= lc) {

            // left → right
            for (int j = fc; j <= lc; j++)
                ans.push_back(matrix[fr][j]);
            fr++;

            // top → bottom
            for (int i = fr; i <= lr; i++)
                ans.push_back(matrix[i][lc]);
            lc--;

            // right → left
            if (fr <= lr) {
                for (int j = lc; j >= fc; j--)
                    ans.push_back(matrix[lr][j]);
                lr--;
            }

            // bottom → top
            if (fc <= lc) {
                for (int i = lr; i >= fr; i--)
                    ans.push_back(matrix[i][fc]);
                fc++;
            }
        }
        return ans;
        
    }
};