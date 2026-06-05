class Solution {
public:
bool isPrime(int n) {
    if(n <= 1) return false;
    int cnt = 0;  // Initialize a counter variable to count the number of factors

    // Loop through numbers from 1 to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;  // If n is divisible by i, increment the counter

            // If n is not a perfect square, count its reciprocal factor
            if (n / i != i) {
                cnt++;
            }
        }
    }
    if(cnt>2)return false;
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