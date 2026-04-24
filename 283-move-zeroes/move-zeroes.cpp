class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
             nums.erase(nums.begin() + i);
             i--;
             c++;
            }
        }
        for(int i=0;i<c;i++){
            nums.push_back(0);
        }
        
    }
};