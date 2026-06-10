class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans(n,0);
        vector<int>pref(n,0);
        vector<int>suff(n,0);

        pref[0]=boxes[0]-'0';
        int psum=pref[0];
        for(int i = 1; i < n; i++){
            pref[i]=pref[i-1]+(boxes[i]-'0');
            ans[i]=psum;
            psum+=pref[i];

        }
        suff[n-1]=boxes[n-1]-'0';
         int ssum=suff[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+(boxes[i]-'0');
            ans[i]+=ssum;
            ssum+=suff[i];
        }

        // for(int i = 0; i < n; i++){
        //     //pref from 0 to i-1;
        //     int psum=0;
        //     int ssum=0;
        //     for(int j = 0; j <i ; j++){
        //         psum+=pref[j];
        //     }
        //     for(int j = i+1; j <n ; j++){
        //         ssum+=suff[j];
        //     }
        //     ans[i]=psum+ssum;

        // }
    return ans;
    }
    
};