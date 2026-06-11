class Solution {
public:
     static constexpr long long MOD = 1e9 + 7;

    long long power(long long base, long long exponent) {
        if (exponent == 0)
            return 1;

        long long half = power(base, exponent / 2);

        long long result = (half * half) % MOD;

        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }

        return result;
    }
    int MaxDepth( unordered_map<int, vector<int>>& adj,int root,int parent){
        int md=0;
        for(auto x:adj[root]){
            if (x == parent)
                continue;
            md=max(md,MaxDepth(adj,x,root)+1);
        }
        return md;

    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
         unordered_map<int, vector<int>> adj;
         for(auto& e :edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
         }

         int d = MaxDepth(adj, 1, 0);
        return power(2,d-1);
        
    }
};