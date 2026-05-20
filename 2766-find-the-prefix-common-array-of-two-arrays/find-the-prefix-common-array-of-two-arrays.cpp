class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> freq(51,0);
        int n=A.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            freq[B[i]]++;
            int count =0;
            for(int j=1;j<51;j++){
                if(freq[j]==2){
                    count++;
                }
            }
            ans[i]=count;
        }
        return ans;
        
    }
};