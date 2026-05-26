class Solution {
public:
    vector<vector<int>> ans;
    vector<int> sub;
    int n;
    void solve(vector<int>& candidates, int target,int idx){
        if(target==0){
            if(!(find(ans.begin(),ans.end(),sub) != ans.end()))ans.push_back(sub);
            return;
        }
        if(idx==n || target<0) return;
        //pick
        sub.push_back(candidates[idx]);
        solve(candidates,target-candidates[idx],idx+1);
        //not pick
        while(idx+1 <n && candidates[idx]==candidates[idx+1]  )idx++;
        sub.pop_back();
        solve(candidates,target,idx+1);
         
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        n=candidates.size();
        solve(candidates,target,0);

        return ans;
    }
};