class Solution {
public:
    vector<int> minOperations(string s) {
        int n=s.size();
        vector<int>ans(n,0);
        for(int i = 0; i < n; i++){
            //curr index to left
            int op=0;
            for(int j = i; j >=0; j--){
               if(s[j]=='1' && j!=i)op+=(i-j);
            }
            //curr to right
            for(int j = i; j < n; j++){
                if(s[j]=='1' && j!=i)op+=(j-i);
            }
            ans[i]=op;

        }
        return ans;
        
    }
};