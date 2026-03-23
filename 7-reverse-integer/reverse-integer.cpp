class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int curr=0;
        
        while (x > 0|| x<0) {
        if (rev <= INT_MAX/10 && rev >= INT_MIN/10){
            curr = x%10;
            rev = (rev*10)+curr;
            x=x/10;
        }
        else {
            return 0;
        }
        }
 
     return rev;
 
    }
};