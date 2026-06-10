class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        int n = word.size();

        for (int i = 0; i < n; i++) {
            char ch = word[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {

                ans += 1LL * (i + 1) * (n - i);
            }
        }

        return ans;
    }
};