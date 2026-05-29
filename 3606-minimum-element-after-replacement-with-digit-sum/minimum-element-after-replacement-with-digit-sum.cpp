class Solution {
public:
    int sumd(int num){
        int s=0;
        while(num>0){
            s+=(num%10);
            num/=10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            ans=min(ans,sumd(nums[i]));
        }
         return ans;

        
    }
};