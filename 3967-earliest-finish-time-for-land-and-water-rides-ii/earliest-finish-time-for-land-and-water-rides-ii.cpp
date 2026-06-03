class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();

        int land = INT_MAX;
    

        // int land = INT_MAX;
        for (int i = 0; i < n; i++)
            land = min(land, landStartTime[i] + landDuration[i]);

        int water = INT_MAX;
        for (int i = 0; i < m; i++)
            water = min(water, waterStartTime[i] + waterDuration[i]);

        int ans = INT_MAX;

        for (int i = 0; i < m; i++)
            ans = min(ans, max(land, waterStartTime[i]) + waterDuration[i]);

        for (int i = 0; i < n; i++)
            ans = min(ans, max(water, landStartTime[i]) + landDuration[i]);

        return ans;
    }
};