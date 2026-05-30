class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,mid=0,e=nums.size()-1;
        while(mid<=e){
            if(nums[mid]==0){
                swap(nums[mid++],nums[s++]);
            }
            else if(nums[mid]==1)mid++;
            else{
                swap(nums[mid],nums[e--]);
            }
            // mid++;
        }

    }
};