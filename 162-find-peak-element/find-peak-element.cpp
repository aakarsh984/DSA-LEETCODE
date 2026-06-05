class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int mid=s+(e-s+1)/2;
                if(nums[mid]>nums[mid-1]) s=mid;
                else e=mid-1;
        }
         
        return s;
        
    }
};