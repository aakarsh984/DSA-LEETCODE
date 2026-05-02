class Solution {
public:
    int rotatedDigits(int n) {

        int res = 0;

        for(int i = 1; i <= n; i++) {

            int x = 0;
            int cpy = i;
            int place = 1;
            bool valid = true;

            while(cpy > 0) {

                int d = cpy % 10;

                if(d == 0 || d == 1 || d == 8) { }
                else if(d == 2) d = 5;
                else if(d == 5) d = 2;
                else if(d == 6) d = 9;
                else if(d == 9) d = 6;
                else {
                    valid = false;
                    break;
                }

                x = d * place + x;

                place *= 10;
                cpy /= 10;
            }

            if(valid && x != i)
                res++;
        }

        return res;
    }
};