class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(10,0);
        int temp=n;
        while(temp>0){
            freq[temp%10]++;
            temp/=10;
        }
        int ans=0;
        for(int i = 0; i < 10; i++){
            ans+=(freq[i]*i);
        }
         return ans;

        
    }
};