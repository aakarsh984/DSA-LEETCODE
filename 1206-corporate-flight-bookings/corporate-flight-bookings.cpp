class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n, 0);

        for (auto& x : bookings) {
            int f = x[0];
            int l = x[1];
            int s = x[2];

            v[f - 1] += s;
            if (l < n)
                v[l] -= s;
        }

        int sum = 0;
        for (int i = 1; i < v.size(); i++) {
            v[i]+=v[i-1];
        }

        return v;
    }
};