    class Solution {
    public:
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            vector<bool> vis(n, false);
            int p = 0;

            for(int i=0;i<n;i++){
                if(!vis[i]){
                    p++;
                    queue<int> q;
                    q.push(i);
                    vis[i] = true;

                    while(!q.empty()){
                        int curr=q.front();
                        q.pop();
                        for(int j = 0; j < n; j++) {
                        if(isConnected[curr][j] && !vis[j]) {
                            vis[j] = true;
                            q.push(j);
                        }
                    }
                }
            }
        }
        
        return p;
            
    }
};