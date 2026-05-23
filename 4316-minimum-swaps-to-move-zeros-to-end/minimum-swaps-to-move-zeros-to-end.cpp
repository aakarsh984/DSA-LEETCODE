class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = n - 1;

        int count = 0;

        while (i < j) {

            // left should stop at 0
            while (i < j && nums[i] != 0) {
                i++;
            }

            // right should stop at non-zero
            while (i < j && nums[j] == 0) {
                j--;
            }

            // swap possible
            if (i < j) {
                count++;
                i++;
                j--;
            }
        }

        return count;
    }
};