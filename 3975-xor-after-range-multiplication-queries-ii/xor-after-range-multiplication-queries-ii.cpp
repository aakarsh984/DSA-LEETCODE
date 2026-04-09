class Solution {
public:
    int M = 1e9 + 7;
    // Binary Exponentiation for Fermat's Little Theorem - > Pow(v ,M-2)
    long long power(long long a, long long b) {
        if (b == 0)
            return 1;

        long long half = power(a, b / 2);
        long long result = (half * half) % M;

        if (b % 2 == 1) {
            result = (result * a) % M;
        }

        return result;
    }
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int blockSize = ceil(sqrt(n));

        unordered_map<int, vector<vector<int>>> smallKMap;

        for (auto& query : queries) {
            int L = query[0];
            int R = query[1];
            int K = query[2];
            int V = query[3];
            if (K >= blockSize) {
                for (int i = L; i <= R; i += K) {
                    nums[i] = (1LL * nums[i] * V) % M;
                }

            } else { // K < blockSize
                smallKMap[K].push_back(query);
            }
        }

        for (auto& p : smallKMap) {
            int K = p.first;
            auto& allQueries = p.second;
            vector<int> mul(n, 1);
            for (auto& query : allQueries) {
                int L = query[0];
                int R = query[1];
                // int K = query[2];
                int V = query[3];

                mul[L] = (1LL* mul[L] * V) % M;
                int steps=(R-L)/K;
                int next=L+(steps+1)*K;
                 if(next < n)
                    mul[next] = (mul[next] * power(V, M-2)) % M;
            }

            for(int i=0;i<n;i++){
                if(i-K>=0){
                    mul[i]=(1LL*mul[i]*mul[i-K])%M;
                }
            }
              for(int i=0;i<n;i++){
                nums[i]=(1LL *nums[i]*mul[i])%M;
              }

            }

        int res=0;
        for(auto x: nums){
            res^=x;
        }
        return res;
    }
};