class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
    int n=nums.size();
        int i=0,j=1;
        
        int ans=0;
        while(j<n){
             
         int diff=nums[j]-nums[i];

           if (i == j || diff < k) {
                j++;
            }
           else if(diff==k){
                ans++;
                while(j+1<n and nums[j]==nums[j+1] ) j++;
             j++;
                
            }
            else if(diff>k){
                i++;
            }

        }
         return ans;
        
        
    }
};