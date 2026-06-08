class Solution {
public:
    bool canDistribute(vector<int>& quantities, int n, int maxProducts) {
        // long long storesNeeded = 0;

        for (int quantity : quantities) {
            n-= (quantity + maxProducts - 1) / maxProducts;

            if (n<0) {
                return false;
            }
        }

        return true;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 1;
        int right = *max_element(quantities.begin(), quantities.end());

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canDistribute(quantities, n, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};