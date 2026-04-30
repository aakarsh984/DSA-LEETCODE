class Solution {
public:
    int nextNumber(int& n) {
        int sum = 0;
        while(n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n != 1) {
            if(seen.count(n)) {
                return false;  // 🔴 STOP: cycle detected
            }
            seen.insert(n);
            n = nextNumber(n);
        }

        return true; // ✅ reached 1
    }
};