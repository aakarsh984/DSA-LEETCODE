class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>xpref(n,0);
        vector<int>ans;
        xpref[0]=arr[0];
        for(int i = 1; i < n; i++){
            xpref[i]=xpref[i-1]^arr[i];
        }

        for(auto &q: queries){
            int l=q[0];
            int r=q[1];

            if(l==0){
                ans.push_back(xpref[r]);
            }
            else{
                ans.push_back(xpref[l-1]^xpref[r]);
            }

        }
        
        return ans;

    }
};