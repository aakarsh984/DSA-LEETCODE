class Solution {
public:

    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>less;
        vector<int>more;
        vector<int>eq;
        for(int i = 0; i < n; i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                more.push_back(nums[i]);
            }
            else{
                eq.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(auto x:less){
            ans.push_back(x);
        }
         for(auto x:eq){
            ans.push_back(x);
        }
 for(auto x:more){
            ans.push_back(x);
        }
        return ans;
    
        
    }
};