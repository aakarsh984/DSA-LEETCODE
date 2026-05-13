class Solution {
public:
bool isPoss(vector<vector<int>>& tasks, int mid){
        for(auto& t:tasks){
            int act=t[0];
            int min=t[1];
        if(min>mid) return false;
        else{//mid>=min
            mid-=act;
        }
        
        }
        return true;
}


    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int l = 0;
        int r = 1e9;
        int res = INT_MAX;
        sort(tasks.begin(), tasks.end(), [](const auto& a, const auto& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (isPoss(tasks, m)) {
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};