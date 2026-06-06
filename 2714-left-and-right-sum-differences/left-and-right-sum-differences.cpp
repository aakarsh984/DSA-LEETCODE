class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n,0);
        vector<int>ans(n,0);
        for(int i = 1; i < n; i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        //  for (auto i : pref) {
        //     /* code */
        //     cout<<i<<" ";
        // }
        int right=0;
       for(int i = n-1; i >=0; i--){
           ans[i]=abs(right-pref[i]);
           right+=nums[i];
       }
       return ans;


        
    }
};