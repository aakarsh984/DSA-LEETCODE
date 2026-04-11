class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        // char c = '0' + digit;
        for(int i=0;i<nums.size();i++){
            // string s=to_string(nums[i]);
            int a=nums[i];
            while(a>0){
                if((a%10)==digit){
                    ans++;
                }
                a/=10;
            }
           
        }
        return ans;
        
    }
};