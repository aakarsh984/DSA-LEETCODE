class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = queries.size();
        int m = nums.size();
        vector<int> ans(n, -1);

        unordered_map<int, vector<int>> mp;

        // Build map
        for (int i = 0; i < m; i++) {
            mp[nums[i]].push_back(i);
        }

        for (int i = 0; i < n; i++) {
            int idx = queries[i];
            auto &v = mp[nums[idx]];

            if (v.size() <= 1) continue;

            int best = INT_MAX;

            // binary search
            auto it = lower_bound(v.begin(), v.end(), idx);
            int pos = it - v.begin();

            int sz = v.size();

            // 🔹 next index (circular)
            int next = v[(pos + 1) % sz];

            // 🔹 previous index (circular)
            int prev = v[(pos - 1 + sz) % sz];

            // compute distances
            int d1 = abs(next - idx);
            int d2 = abs(prev - idx);

            best = min({best, min(d1, m - d1), min(d2, m - d2)});

            ans[i] = best;
        }

        return ans;
    }
};