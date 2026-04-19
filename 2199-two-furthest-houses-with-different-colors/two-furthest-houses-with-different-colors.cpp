class Solution {
public:
    int maxDistance(vector<int>& colors) {
        unordered_map<int, vector<int>> mp;
        int n = colors.size();


        for(int i = 0; i < n; i++) {
            mp[colors[i]].push_back(i);
        }

        int ans = 0;

        for(auto &p1 : mp) {
            for(auto &p2 : mp) {
                if(p1.first == p2.first) continue;

                vector<int> &v1 = p1.second;
                vector<int> &v2 = p2.second;

                for(int i : v1) {
                    for(int j : v2) {
                        ans = max(ans, abs(i - j));
                    }
                }
            }
        }

        return ans;
    }
};