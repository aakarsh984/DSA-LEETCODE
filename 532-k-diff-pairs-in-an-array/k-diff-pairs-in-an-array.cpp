class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
    int n=nums.size();
        int i=0,j=1;
        // int diff=0;
        int ans=0;
        while(j<n){
             
            // diff=nums[j]-nums[i];

           if (i == j || nums[j] - nums[i] < k) {
                j++;
            }
           else if(nums[j] - nums[i]==k){
                ans++;
                // i++;
              
                while(j+1<n and nums[j]==nums[j+1] ) j++;
             j++;
                
            }
            else if(nums[j] - nums[i] >k){
                i++;
            }

        }
         return ans;
        
        
    }
};