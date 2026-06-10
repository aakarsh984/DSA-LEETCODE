class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // hare and tortoise
        int slow = nums[0];
        int fast = nums[0];
        // first step
        slow = nums[slow];
        fast = nums[nums[fast]];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};