class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        char c = '0' + digit;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            ans+= count(s.begin(),s.end(),c);;
        }
        return ans;
        
    }
};