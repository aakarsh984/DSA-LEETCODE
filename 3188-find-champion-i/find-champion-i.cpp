class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int win=0;
        for(int i=0;i<grid.size();i++){
            if(win==i)continue;
            if(grid[win]<grid[i]){
                win=i;
            }
        }
        return win;
        
    }
};