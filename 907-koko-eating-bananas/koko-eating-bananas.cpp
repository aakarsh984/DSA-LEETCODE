class Solution {
public:
    bool isPossible(vector<int>& piles, int &h,int &mid){
        int hrs=0;
        for(int i = 0; i < piles.size();i++){
            hrs += ceil((double)piles[i] / mid);
             if(hrs>h) return false;
        }

         return true;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=-1;
        int s=1;
        int e= *max_element(piles.begin(),piles.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPossible(piles,h,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};