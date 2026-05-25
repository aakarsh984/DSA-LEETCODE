class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int>& nums,int i,vector<int>&sub){
    if(i==nums.size()){
        if(find(ans.begin(), ans.end(), sub) != ans.end()) return;
        ans.push_back(sub);
        return;
    }
     //not pick
     solve(nums,i+1,sub);
     sub.push_back(nums[i]);
     //pick
      solve(nums, i + 1, sub);
        sub.pop_back();
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>sub;
        sort(nums.begin(),nums.end());
        solve(nums,0,sub);
        return ans;
    }
};