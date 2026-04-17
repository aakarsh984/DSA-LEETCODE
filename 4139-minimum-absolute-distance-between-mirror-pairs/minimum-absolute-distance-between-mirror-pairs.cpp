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
        
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
            nums[i] = reverseNum(nums[i]);
        }
       
        
for(int i=0;i<nums.size();i++){ 
        for (int pos : mp[nums[i]]) {
            if (pos > i) {
                int d = abs(pos - i);
                ans = min(ans, d);
            }
            if(ans==1) break;
        }
        if(ans==1) break;
    }
        return ans==INT_MAX?-1:ans;
    }
};