class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int m=INT_MIN;
        int x=0;
long long a = *max_element(nums.begin(), nums.end());

int k = 0;
while (a > 0) {
    k++;
    a >>= 1;
}

long long maxXor = (1LL << k) - 1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i==j) continue;
                x=nums[i]^nums[j];
                
              m= max(m,x);
            if(m==maxXor) break;
            }
             if(m==maxXor) break;
        }
        return m==INT_MIN?0:m;
    }
};