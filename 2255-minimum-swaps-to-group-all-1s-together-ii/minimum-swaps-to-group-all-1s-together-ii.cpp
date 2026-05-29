class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int oneCount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                oneCount++;
        }
        if (oneCount == 0)
            return 0;

        // handle circular array
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        // nuber of one = window size
        int zero = 0;
       
        int i = 0, j = 0;
        // window formation
        // for (j = 0; j < oneCount; j++) {
        //     if (nums[j] == 0)
        //         zero++;
        // }
         int ans = INT_MAX;
        while (j < 2 * n) {

            while(j-i+1<oneCount){
                if(nums[j]==0){
                    zero++;
                }
                j++;

            }
            if(nums[j]==0){
                zero++;
            }
            if (j - i + 1 > oneCount) {
                if (nums[i] == 0) {
                    zero--;
                }
                i++;
            }
            ans = min(ans, zero);
            if(ans==0){
                return 0;
            }
            j++;
        }
        return ans;
    }
};