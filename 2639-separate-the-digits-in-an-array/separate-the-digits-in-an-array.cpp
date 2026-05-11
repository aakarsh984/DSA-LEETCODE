class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            vector<int> v;
            while(x > 0) {
                v.push_back(x % 10);
                x /= 10;
            }
            reverse(v.begin(), v.end());

            for(int digit : v) {
                res.push_back(digit);
            }
        }

        return res;
    }
};