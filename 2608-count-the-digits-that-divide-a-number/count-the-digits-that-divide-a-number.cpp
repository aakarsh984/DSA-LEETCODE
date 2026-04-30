class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int cp=num;
        while(cp>0){
            int d=cp%10;
            if(d==0)continue;
            if(num%d==0)c++;
            cp/=10;
        }
        return c;
        
    }
};