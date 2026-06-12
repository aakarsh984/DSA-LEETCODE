class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
       
        for(int j = 1; j < n; j++){
            while(nums[i]!=0 and j>i)i++;
            if(nums[j]!=0){
                swap(nums[i],nums[j]);  
            }
        }
        
    }
};