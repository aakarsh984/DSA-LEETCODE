class Solution {
public:
    bool consecutiveSetBits(int n) {
        string bin;

        while (n) {
            bin += (n & 1) + '0';
            n >>= 1;
        }

        reverse(bin.begin(), bin.end());

        int cnt = 0;

        for (int i = 0; i + 1 < bin.size(); i++) {
            if (bin[i] == '1' && bin[i + 1] == '1')
                cnt++;
        }

        return cnt == 1;
    }
};