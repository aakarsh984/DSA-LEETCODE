class Solution {
public:
bool isPrime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

long long nextPrime(long long n) {
    long long candidate = n + 1;
    if (candidate % 2 == 0) candidate++;  // make it odd

    while (!isPrime(candidate))
        candidate += 2;

    return candidate;
}
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i = 0; i < nums.size(); i++){
            if(i%2==0){
                if(isPrime(nums[i])){
                    continue;
    
                }
                else{
                    if(nums[i]==1){
                        ans++;
                        continue;
                    }
                   int x= nextPrime(nums[i]);
                   cout<<i<<x<<endl;
                   ans=ans+(x-nums[i]);
                }   
            }
            else{
                if(nums[i]==2) {
                    ans+=2;
                    continue;
                }
                if(isPrime(nums[i])){
                    ans++;
                }
                else{
                    continue;
                }
            }
        }
        return ans;

    }
};