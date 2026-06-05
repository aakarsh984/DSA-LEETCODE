class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
            
            int n=nums.size();
            int ans=0;
            unordered_set<int> st(nums.begin(), nums.end());
            int uniq=st.size();
            if(uniq==1)return (n*(n+1))/2;

             unordered_map<int,int>mp;
             int i=0,j=0;

             while(j<n){
                mp[nums[j]]++;
                while(mp.size()==uniq and j>=i){
                    ans+=n-j;
                    if(mp[nums[i]] ==1){
                        mp.erase(nums[i]);
                    }
                    else mp[nums[i]]--;
                    i++;
                }
                        
               
                j++;
             }
             return ans; 
    }
};