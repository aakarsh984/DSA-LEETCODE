class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int i = 0;
        for (int x : s) {
            nums[i++] = x;   // overwrite original array
        }

        return s.size();  // return number of unique elements
    }
};