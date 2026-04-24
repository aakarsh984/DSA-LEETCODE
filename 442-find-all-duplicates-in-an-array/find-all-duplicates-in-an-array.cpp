class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int>v;
        for(int i = 0; i < nums.size(); i++){
           
            if(!s.count(nums[i])){
                s.insert(nums[i]);
            }
            else{
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};