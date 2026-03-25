class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int x=grid[0].size();
        for(int i=grid.size()-1;i>=0;i--){
            if(grid[i][x-1]>0)break;
             for(int j=x-1;j>=0;j--){
                if(grid[i][j]<0){
                    ans++;
                }
                else{
                    break;
                }
             }
        }
        return ans;
    }
};