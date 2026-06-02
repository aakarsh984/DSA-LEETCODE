class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
    int ans=INT_MAX;
        for(int i = 0; i < n; i++){
            int lc=landStartTime[i]+landDuration[i];

            for(int j = 0; j < m; j++){ 
            int wc=waterStartTime[j]+waterDuration[j];
            int cost1=lc+max(0,waterStartTime[j]-lc)+waterDuration[j];

            int cost2=wc+max(0,landStartTime[i]-wc)+ landDuration[i];

            ans=min(ans,min(cost1,cost2));

        }

        }
        return ans;
        
    }
};