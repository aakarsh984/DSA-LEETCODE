class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
    int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1; //starting sum 0 hai which is divisble by k any how to count +1
        int res=0;
        for(int i = 0; i < n; i++){
            sum+=nums[i];
            int check = sum%k;
            if(check<0)check+=k;
            if(mp.count(check)){
                res+=mp[check];
                mp[check]++;
            }
            else{
                mp[check]++;
            }
        }
         return res;
        
    }
};