class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = 0;
        int count = 0;
        if (k == 0)
            return true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (count == 0) {
                    last = i;
                    count++;
                    continue;
                }

                int diff = i - last - 1;
                last = i;
                if (diff < k)
                    return false;
            }
        }
        return true;
    }
};