class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3, 0);

        // Step 1: Count
        for (int x : nums) {
            freq[x]++;
        }

        // Step 2: Rebuild sorted array
        int index = 0;

        for (int val = 0; val < 3; val++) {
            while (freq[val] > 0) {
                nums[index] = val;
                index++;
                freq[val]--;
            }
        }
    }
};