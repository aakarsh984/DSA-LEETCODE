class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> count(100001, 0);

        for (int cost : costs) {
            count[cost]++;
        }

        int ans = 0;

        for (int i = 1; i <= 100000; i++) {
            if (count[i] == 0) continue;

            int canBuy = min(count[i], coins / i);

            ans += canBuy;
            coins -= canBuy * i;

            if (coins < i) continue;
        }

        return ans;
    }
};