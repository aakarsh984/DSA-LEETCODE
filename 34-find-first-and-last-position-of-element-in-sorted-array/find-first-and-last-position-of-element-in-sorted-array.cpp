class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int ans=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
               e=--mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target){
         int ans=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=++mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
       
		// int first = ;
		// int last =;
		
		
		
		return {lowerBound(nums, target),  upperBound(nums, target)};

        
    }
};