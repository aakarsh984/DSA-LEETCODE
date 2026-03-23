class Solution {
public:
    bool isPalindrome(int x) {
        int cpy=x;
        int rev =0;
             while(cpy>0){
                if (rev > INT_MAX/10){
                    return false;
                }
                else{
               int curr=cpy%10;
                rev= (rev*10)+curr;
                cpy=cpy/10;
                }
                }
        if (x<0){
            return false;
        }
        if(x==rev){
                return true;
            }
            else{
                return false;
            }
    }
};