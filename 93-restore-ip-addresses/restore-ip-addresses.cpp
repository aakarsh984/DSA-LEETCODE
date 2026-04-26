class Solution {
public:
    vector<string> res;
    int parts=0;
    bool isvalid(string st) {
        if (st[0] == '0')
            return false;
        int n = stoi(st);
        if (n >= 0 && n <= 255)
            return true;
        return false;
    }
    void solve(string s, string curr, int parts, int idx) {
        int n =s.size();
        if (idx == s.size() && parts == 4) {
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        if (idx + 1 <= n) {
            solve(s, curr + s.substr(idx, 1) + '.', parts + 1, idx + 1);
        }

        if (idx + 2 <= n && isvalid(s.substr(idx, 2))) {
            solve(s, curr + s.substr(idx, 2) + '.', parts + 1, idx + 2);
        }
        if (idx + 3 <= n && isvalid(s.substr(idx,3))) {
            solve(s, curr + s.substr(idx, 3) + '.', parts + 1, idx + 3);
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if (s.size() > 12)
            return {};
        string curr = "";
        solve(s, curr, parts, 0);
        return res;
    }
};