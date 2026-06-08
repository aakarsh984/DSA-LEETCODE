class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int countless=0;
        int counteq=0;
        for(int i = 0; i < n; i++){
            if(nums[i]<pivot){
                countless++;
            }
            else if(nums[i]==pivot){
                counteq++;
            }
        }
        int k=counteq+countless;
        int i=0;
        int j=countless;

        vector<int>ans(n);
        for(int x: nums){
            if(x<pivot){
                ans[i++]=x;
            }
            else if(x==pivot){
                ans[j++]=x;
            }
            else{
                ans[k++]=x;
            }
        }
return ans;

        
    }
};