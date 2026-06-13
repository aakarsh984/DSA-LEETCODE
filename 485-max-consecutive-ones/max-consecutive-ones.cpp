class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=INT_MIN;
        int l=0;
        for(int x:nums){
            if(x==1){
                l++;
            }else{
                l=0;
            }
            ans=max(l,ans);
        }
        return ans;
    }
};