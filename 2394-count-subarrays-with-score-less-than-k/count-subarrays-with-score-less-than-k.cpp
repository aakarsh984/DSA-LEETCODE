class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i=0,j=0;
        int n=nums.size();
        long long sum=0;
        long long count =0;
    long long score=0;
         while(j<n){
            sum +=nums[j];
           score=sum*(j-i+1);
            while(score>=k && j>i){
                sum-=nums[i];
                i++;
                 score=sum*(j-i+1);
            }
          if(score<k) count+=(j-i+1);
            j++;
         }
          return count;


        
    }
};