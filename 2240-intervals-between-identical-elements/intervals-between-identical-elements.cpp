class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size();
        vector<long long> res(n, 0);
        unordered_map<int, long long> idxcount;
        unordered_map<int, long long> idxsum;

        for (int i = 0; i < n; i++) {
            long long freq = idxcount[arr[i]];
            long long sum = idxsum[arr[i]];

         res[i] += freq * i - sum;
            idxcount[arr[i]] += 1;
            idxsum[arr[i]] += i;
        }
        idxcount.clear();
        idxsum.clear();

        for (int i = n-1; i >= 0; i--) {
            long long freq = idxcount[arr[i]];
            long long sum = idxsum[arr[i]];

            res[i] += sum-freq*i;
            idxcount[arr[i]] += 1;
            idxsum[arr[i]] += i;
        }
        return res;
    }
};