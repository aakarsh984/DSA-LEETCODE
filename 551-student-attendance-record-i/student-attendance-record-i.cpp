class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l = 0;

        for (char c : s) {
            if (c == 'A') {
                a++;
                if (a >= 2) return false;
                l = 0;
            }
            else if (c == 'L') {
                l++;
                if (l >= 3) return false;
            }
            else {
                l = 0;
            }
        }
        return true;
    }
};