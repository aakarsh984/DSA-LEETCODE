class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> count(20001, 0);
        for (auto x : nums) {
            count[x + 10000]++;
        }

        int maxSum = 0;
        bool flag = true;

        for (int i = 0; i < count.size(); i++) {
            if (count[i] > 0) {
                if (flag)
                    maxSum += i - 10000;

                flag = !flag;
                count[i]--;
                i--;
            }
        }
        return maxSum;
    }
};