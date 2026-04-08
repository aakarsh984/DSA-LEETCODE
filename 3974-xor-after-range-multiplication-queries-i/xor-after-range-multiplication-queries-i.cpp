class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int MOD = 1e9 + 7;
        for(int i=0;i<queries.size();i++){
            int idx= queries[i][0];
            // int ri=queries[i][1];
            // int v=queries[i][3];
            // int k=queries[i][2];

        while(idx<=queries[i][1]){
            nums[idx]=((long long)nums[idx]*queries[i][3])% MOD;
            idx+=queries[i][2];
        }
        }
        int x = 0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        return x;
    }
};