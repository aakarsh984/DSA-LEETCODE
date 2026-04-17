class Solution {
public:
    int reverseNum(int n) {
        int rev = 0;
        while (n != 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int, vector<int>> mp;
        vector<int> copy=nums;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = reverseNum(nums[i]);
        }
        
for(int i=0;i<nums.size();i++){ 
        int val = nums[i];
        for (int pos : mp[val]) {
            if (pos != i && pos > i) {
                int d = abs(pos - i);
                // d = min(d, n - d);   // remove if not circular
                ans = min(ans, d);
            }
        }
        if(ans==1) break;
    }
        return ans==INT_MAX?-1:ans;
    }
};