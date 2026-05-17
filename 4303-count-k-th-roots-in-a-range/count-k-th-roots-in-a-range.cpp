class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if (k == 1)
            return r - l + 1;

        int count = 0;
        for (long long x = 0;; x++) {
            long long val = 1;
            for (int i = 0; i < k; i++)
                val *= x;
            if (val > r)
                break;
            if (val >= l)
                count++;
        }

        return count;
    }
};