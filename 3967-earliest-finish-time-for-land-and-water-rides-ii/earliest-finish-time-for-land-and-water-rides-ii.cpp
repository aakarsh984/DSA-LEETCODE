class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();

        int land=INT_MAX;
        int water=INT_MAX;

        int wtl=INT_MAX;
        int ltw=INT_MAX;

        for(int i = 0; i < n; i++){
            land=min(land,landStartTime[i]+landDuration[i]);
        }
        for(int i = 0; i < m; i++){
            ltw=min(ltw,max(land,waterStartTime[i])+waterDuration[i]);
            water=min(water,waterStartTime[i]+waterDuration[i]);
        }
        for(int i = 0; i < n; i++){
            wtl=min(wtl,max(water,landStartTime[i])+landDuration[i]);
        }
        return min(ltw,wtl);
        
    }
};