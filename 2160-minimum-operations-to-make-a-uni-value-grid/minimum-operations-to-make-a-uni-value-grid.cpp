class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j = 0; j < grid[0].size(); j++){
                v.push_back(grid[i][j]);
            }
        }
       int n=v.size();
       sort(v.begin(),v.end());
       int target =v[n/2];
    int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==target) continue;
            if(abs((target-v[i]))%x==0 ){
                ans+=abs(target-v[i])/x;
            }
            else {
                return -1;
            }
        }

        return ans;
    }
};