class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum = 0;
        long long f = 0;
        int n = nums.size();

        // Calculate total sum and F(0)
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            f += 1LL * i * nums[i];
        }

        long long ans = f;

        // Calculate other F(k)
        for(int k = 1; k < n; k++) {
            f = f + sum - 1LL * n * nums[n - k];
            ans = max(ans, f);
        }

        return ans;
    }
};