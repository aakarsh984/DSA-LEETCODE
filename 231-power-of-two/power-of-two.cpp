class Solution {
public:
    bool check(int n, long long ans){
        if(n<ans) return false;
        if(ans==n) return true;
            ans*=2;
         return check(n,ans);
    }
    bool isPowerOfTwo(int n) {
        
         return check(n,1);
        
    }
};