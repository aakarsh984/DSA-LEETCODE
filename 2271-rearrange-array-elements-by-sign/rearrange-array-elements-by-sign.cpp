class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>pos;
       vector<int>neg;

        int n=nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else pos.push_back(nums[i]);
        }
        int i=0,j=0;
        vector<int>ans;
        for(int i = 0; i < n/2; i++){
            ans.push_back(pos[i]);
             ans.push_back(neg[i]);
        }
        return ans;


    }
};