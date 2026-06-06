class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isprime(n+1,true);

        isprime[0]=false;
        isprime[1]=false;

        for(int i = 2; i*i <n; i++){
            if(isprime[i]){
                    for(int j = 2; j*i <= n; j++){
                        isprime[i*j]=false;
                    }
            }
        }
    int count=0;
        for(int i =2; i < n; i++){
            if(isprime[i]==true){
                count++;
            }
        }
        return count;
    }
};