class Solution {
public:
    string s;
    int n;
    long long dpTotalNumbers[16][10][10];
    long long dpTotalWaviness[16][10][10];
    pair<long long, long long> solve(int i, int prevprev, int prev,bool islimited, bool leadingzero) {
        if (i == n) {
            return {1, 0}; // no more score can be generated and we found the
                           // last number
        }
        long long totalNo = 0;
        long long totalWave = 0;
        if(!islimited && !leadingzero && prevprev>=0 && prev>=0){
            if(dpTotalNumbers[i][prevprev][prev]!=-1 and dpTotalWaviness[i][prevprev][prev]!=-1 ){
                 return {dpTotalNumbers[i][prevprev][prev],dpTotalWaviness[i][prevprev][prev]};
            }
        }

        int limitdigit = islimited ? s[i] - '0' : 9;

        for (int d = 0; d <= limitdigit; d++) {
            bool isleading = leadingzero and (d == 0);
            int newprevprev = prev;
            int newprev = isleading ? -1 : d;

            auto [remainTotalNumbers, remainTotalWaveScore] =
                solve(i + 1, newprevprev, newprev,
                      islimited && (d == limitdigit), isleading);

            if (!isleading and prevprev >= 0 and prev >= 0) {
                bool ispeak = prevprev < prev and prev > d;
                bool isvalley = prevprev > prev and prev < d;
                if (ispeak || isvalley) {
                    totalWave += remainTotalNumbers;
                }
            }

            totalNo += remainTotalNumbers;
            totalWave += remainTotalWaveScore;
        }
        if(!islimited && !leadingzero && prevprev>=0 && prev>=0){
            dpTotalNumbers[i][prevprev][prev]=totalNo;
            dpTotalWaviness[i][prevprev][prev]=totalWave;

        }
        return {totalNo, totalWave};
    }
    long long func(long long num) {
        if (num <= 100)
            return 0;

        s = to_string(num);
        n = s.length();
        memset(dpTotalNumbers, -1, sizeof(dpTotalNumbers));
        memset(dpTotalWaviness, -1, sizeof(dpTotalWaviness));

        auto [totalNo, TotalWave] = solve(0, -1, -1, true, true);
        // starting index, prev prev, prev,islimted/bound,isleading zero

        return TotalWave;
    }

    long long totalWaviness(long long num1, long long num2) {

        return func(num2) - func(num1 - 1);
    }
};