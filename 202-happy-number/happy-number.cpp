class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        
        while (true){
            if(st.count(n)==1) return false;
            else st.insert(n);
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=pow(d,2);
                n/=10;
            }
            if(sum==1) return true;
            else n=sum;
        }
        return true;
    }
};