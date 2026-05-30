class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            // cout<<"idx: "<<idx<<" ,i: "<<i<<endl;
            if(nums[i] != 0){
                swap(nums[idx],nums[i]);
                idx++;
            }
            
        }
    }
};