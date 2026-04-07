class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,sum=0;
        while (n>0){
            int x =n%10;
            sum+=x;
            mul*=x;
            n/=10;
        }

        return mul-sum;
        
    }
};