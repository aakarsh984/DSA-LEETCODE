class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long> arr(n,0);
        unordered_map<int, long long>idxcount;
        unordered_map<int, long long>idxsum;

        //left to right
        for(int i=0;i<n;i++){
            long long count =idxcount[nums[i]];
            long long sum= idxsum[nums[i]];
            arr[i]+=count*i-sum;

            idxcount[nums[i]]+=1;
            idxsum[nums[i]]+=i;
        }
        idxcount.clear();
        idxsum.clear();
        for(int i=n-1;i>=0;i--){
            long long count =idxcount[nums[i]];
            long long sum= idxsum[nums[i]];
            arr[i]+=sum-count*i;
            idxcount[nums[i]]+=1;
            idxsum[nums[i]]+=i; 

        }
        return arr;
        
    }
};