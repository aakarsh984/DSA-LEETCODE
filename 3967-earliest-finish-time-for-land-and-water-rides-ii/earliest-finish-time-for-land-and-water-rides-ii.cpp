class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int land=INT_MAX;
        int water=INT_MAX;

        int ltw=INT_MAX;
        int wtl=INT_MAX;

        for(int i = 0; i <landStartTime.size() ; i++){
            land=min(land,landStartTime[i]+landDuration[i]);
        }
        for(int i = 0; i <waterStartTime.size() ; i++){
            water=min(water,waterStartTime[i]+waterDuration[i]);
            ltw=min(ltw,max(land,waterStartTime[i])+waterDuration[i]);

        }
        for(int i = 0;i<landStartTime.size()  ; i++){
            wtl=min(wtl,max(water,landStartTime[i])+landDuration[i]);   
        }


        return min(ltw,wtl);

        
    }
};