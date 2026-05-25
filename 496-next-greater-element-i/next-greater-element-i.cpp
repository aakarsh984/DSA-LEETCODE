class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans(n,-1);
        unordered_map<int,int>mp;
        int m=nums2.size();
        for(int i = 0; i < m; i++){
            mp[nums2[i]]=i;
        }
        for(int i = 0; i < n; i++){
            int j=mp[nums1[i]];
            if(j==m-1) continue;
            for(; j < m; j++){
                if(nums1[i]<nums2[j]){
                    ans[i]=nums2[j];
                    break;
                 }
            }
        }

       return ans; 
        
    }
};