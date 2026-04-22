class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++) {
    
            if(matrix[i][0] <= target && matrix[i][n-1] >= target) {
                
                int low = 0, high = n - 1;

                while(low <= high) {
                    int mid = low + (high - low) / 2;

                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] < target)
                        low = mid + 1;
                    else
                        high = mid - 1;
                }
            }
        }

        return false;
    }
};