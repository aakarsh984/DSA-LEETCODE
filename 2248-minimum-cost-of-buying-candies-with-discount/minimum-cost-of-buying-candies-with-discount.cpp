class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());

    int ans=0;
    int sz=0;
        for(int i = cost.size()-1; i >=0;){
            if(sz==2){
                sz=0;
                i--;
                continue;
            }
            ans+=cost[i];
            sz++;
            i--;
        }
        return ans;

        
    }
};