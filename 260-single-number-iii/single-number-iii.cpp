class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    
         if (nums.size() == 2)
            return nums;
        int xor1 = 0;
        for (int x : nums) {
            xor1 ^= x;
        }
       
        //in XOR find the first set bit  that is the diff bit and then make group according to them 
        int pos = 0;
        while ((xor1 & 1) == 0) {
            xor1 >>= 1;
            pos++;
        }

        int a=0,b=0;
        for (int x : nums) {
            if (((x >> pos) & 1) == 0) {
                a^=x;
            }
            else{
                b^=x;
            }
        }
        return{a,b};

    }
};