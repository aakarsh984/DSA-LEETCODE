class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        int n = 0;
        for (auto c : trips) {
            n = (max(n, c[2]));
        }
        vector<int> v(n + 1, 0);
        for (auto x : trips) {
            int c = x[0]; // passengers
            int l = x[1]; // start
            int r = x[2]; // end
            v[l] += c;
            v[r] -= c;
        }

        int cur = 0;
        for (int i = 0; i < v.size(); i++) {
            cur += v[i];
            if (cur > capacity) {
                return false;
            }
        }
        return true;
    }
};