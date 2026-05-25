class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void solve(vector<int>& nums,int i, vector<int> sub){
        if(i==n)
        {
            ans.push_back(sub);
            return;
        }
        //notpick
        solve(nums,i+1,sub);
        //pick
        sub.push_back(nums[i]);
        solve(nums,i+1,sub);
        sub.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>sub;

         solve(nums,0,sub);

        return ans;
        
    }
};