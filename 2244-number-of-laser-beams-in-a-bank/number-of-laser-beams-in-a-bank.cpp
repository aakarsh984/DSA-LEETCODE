class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0;
        vector<int> x;
        for (int i = 0; i < bank.size(); i++) {
            int c = count(bank[i].begin(), bank[i].end(), '1');
            if (c > 0) {
                x.push_back(c);
            }
        }

        if (x.size() == 0) {
            return 0;
        }
        for (int i = 0; i < x.size() - 1; i++) {

            res += x[i] * x[i + 1];
        }
        return res;
    }
};