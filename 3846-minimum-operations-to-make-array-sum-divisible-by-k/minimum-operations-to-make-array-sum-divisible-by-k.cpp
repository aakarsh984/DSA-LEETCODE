class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int z = accumulate(nums.begin(),nums.end(),0);
      return z%k;



        
    }
};