class Solution {
public:
    bool isPossible(vector<int>& position, int mid, int m) {
        int ball=1;
        int pos=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-pos>=mid){
                ball++;
                pos=position[i];
               
            }
            if(ball==m) 
            return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int s = 1;
        int end = position.back() - position[0];
    int ans=0;
        while (s <= end) {
            int mid = s + (end - s) / 2;
            if (isPossible(position, mid, m)) {
                ans = mid;
                s = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};