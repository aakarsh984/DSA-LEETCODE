class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         if (nums.size() == 2)
            return nums;
        long long xor1 = 0;
        for (int x : nums) {
            xor1 ^= x;
        }
        int mask=(xor1)&(-xor1);

        int a=0;
        int b=0;

        for(auto x: nums){
            if((x&mask) ==0){
                a ^=x;
            }
            else{
                b^=x;
            }
        }
        return {a,b};
    }
};