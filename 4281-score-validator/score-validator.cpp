class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int>ans(2,0);

        for(int i = 0; i < events.size(); i++){
        if(ans[1]+1>10) break;
            if(events[i]=="W")ans[1]++;
            else if(events[i]=="WD"||events[i]=="NB") ans[0]++;
            else {
                int x=stoi(events[i]);
                ans[0]+=x;
            }
            
        }
        return ans;
        
    }
};