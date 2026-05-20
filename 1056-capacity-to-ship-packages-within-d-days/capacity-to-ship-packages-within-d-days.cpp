class Solution {
public:
bool isPossible(vector<int>& weights,int mid, int days){
        int day=1;
        int shipLoad=0;
        for(int i = 0; i < weights.size();){
            if(shipLoad+weights[i]<=mid){
                shipLoad+=weights[i];
                i++;
            }
            else{
                ++day;
                shipLoad=0;
                if(day>days) return false;
            }
        }
        return true;

}
    int shipWithinDays(vector<int>& weights, int days) {
       int e= accumulate(weights.begin(), weights.end(), 0);
      int s=1;
      int ans=-1;
      while(s<=e){
        int mid = s+(e-s)/2;

        if(isPossible(weights,mid,days)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
      }
       return ans;
    }
};