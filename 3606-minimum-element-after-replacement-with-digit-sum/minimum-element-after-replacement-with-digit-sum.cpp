class Solution {
public:
    
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(auto x:nums){
            int s=0;
            while(x>0){
            s+=(x%10);
            x/=10;
        }
        ans=min(ans,s);
           
        }
         return ans;

        
    }
};