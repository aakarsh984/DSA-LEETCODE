class Solution {
public:
    int bsearch(int idx,vector<int>& nums, int k,vector<long long>&pref){
        int l=0;
        int r=idx;
        long long ogsum=0;
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            long long count=idx-mid+1;
            long long total=count*nums[idx];
            if(mid==0)
             ogsum=pref[idx];
            else  ogsum=pref[idx]-pref[mid-1];
           

            if(total-ogsum>k){
                l=mid+1;
            }
            else{
                res=mid;
                r=mid-1;
            }
        }

        return idx-res+1;
    }

    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long>pref(n,0);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++){
            int freq=bsearch(i,nums,k,pref);
            res=max(freq,res);
        }

        return res;
        
    }
};