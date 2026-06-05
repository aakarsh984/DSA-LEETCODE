class Solution {
public:
bool isPrime(int n) {
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

    int countPrimeSetBits(int left, int right) {
        int res=0;
        for(int k=left;k<=right;k++){
            if(isPrime(__builtin_popcount(k))){
                res++;
            }
        }
        return res;
        
    }
};