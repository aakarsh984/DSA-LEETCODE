class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int ans = INT_MAX;
       
        //zameen se paani
        for (int i = 0; i < landStartTime.size(); i++) {
            int landtime = landStartTime[i] + landDuration[i];
            for (int j = 0; j < waterStartTime.size(); j++) {
                int curr = max(landtime, waterStartTime[j]) + waterDuration[j];
                //    int curr=e+waterDuration[j];
                ans = min(ans, curr);
            }
        }
        //paani se zameen
        for (int i = 0; i < waterStartTime.size(); i++) {
            int watertime = waterStartTime[i] + waterDuration[i];

            for (int j = 0; j < landStartTime.size(); j++) {
                int curr = max(watertime, landStartTime[j]) + landDuration[j];
                ans = min(ans, curr);
            }
        }
        return ans;
    }
};