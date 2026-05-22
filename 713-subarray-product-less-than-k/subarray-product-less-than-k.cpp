class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int c=0,prod=1;
        while(j<n){
            prod*=nums[j];
            while(prod>=k && j>i){
                prod/=nums[i];
                i++;
            }


           if(prod<k) c+=(j-i+1);
            j++;
            
        }
        return c;
        
    }
};